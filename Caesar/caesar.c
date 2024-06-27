#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int k = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext: ");
    char ciphertext[strlen(plaintext) + 1]; // +1 для нульового символу

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            ciphertext[i] = ((plaintext[i] - 'A' + k) % 26) + 'A';
        }
        else if (islower(plaintext[i]))
        {
            ciphertext[i] = ((plaintext[i] - 'a' + k) % 26) + 'a';
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[strlen(plaintext)] = '\0'; // Додаємо нульовий символ в кінець рядка

    printf("ciphertext: %s\n", ciphertext);

    return 0;
}
