#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int n = get_int("Height: ");
    if(n == 0)
    {
        n = get_int("Height: ");
    }
    while (n < 0)
    {
        n = get_int("Height: ");
    }
   for (int i = 1; i <= n; i++)
   {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
