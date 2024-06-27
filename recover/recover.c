#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define BLOCK_SIZE 512
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    char *infile = argv[1];
    FILE *inputFile = fopen(infile, "r");
    if (inputFile == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];
    int fileIndex = 0;
    FILE *outputFile = NULL;
    char filename[8];

    while (fread(buffer, BLOCK_SIZE, 1, inputFile) == 1)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (outputFile != NULL)
            {
                fclose(outputFile);
            }

            sprintf(filename, "%03d.jpg", fileIndex++);
            outputFile = fopen(filename, "w");
            if (outputFile == NULL)
            {
                printf("Could not create output JPEG file.\n");
                fclose(inputFile);
                return 1;
            }
        }

        if (outputFile != NULL)
        {
            fwrite(buffer, BLOCK_SIZE, 1, outputFile);
        }
    }

    if (outputFile != NULL)
    {
        fclose(outputFile);
    }
    fclose(inputFile);

    return 0;
}
 