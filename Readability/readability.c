#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int countLetters(string text)
{
    int countL = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            countL++;
        }
    }
    return countL;
}
int countWords(string text)
{
    int countW = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            countW++;
        }
    }
    return countW + 1;
}
int countSent(string text)
{
    int countS = 0;
    for (int j = 0; j < strlen(text) + 1; j++)
    {

        if (text[j] == '.' || text[j] == '!' || text[j] == '?')
        {
            countS++;
        }
    }
    return countS;
}
int clindex(float a, float b, float c)
{
    float L;
    float S;
    float Index;
    L = ((a / b) * 100.);
    S = ((c / b) * 100.);
    Index = 0.0588 * L - 0.296 * S - 15.8;
    return round(Index);
}
int main()
{
    string text = get_string("Text:");
    float a = countLetters(text); // countL
    float b = countWords(text);   // countW
    float c = countSent(text);    // countS
    int index = clindex(a, b, c);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
