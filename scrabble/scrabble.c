#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
int compute_score(string word);
void print(int score1, int score2)
{
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}
int compute_score(string word)
{
    int score = 0;

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        char current = toupper(word[i]);
        if (isalpha(current))
        {
            if (strchr("AEIOULNRST", current) != NULL)
            {
                score += 1;
            }
            else if (strchr("DG", current) != NULL)
            {
                score += 2;
            }
            else if (strchr("BCMP", current) != NULL)
            {
                score += 3;
            }
            else if (strchr("FHVWY", current) != NULL)
            {
                score +=4;
            }
            else if (strchr("K", current) != NULL)
            {
                score += 5;
            }
            else if (strchr("JX", current) != NULL)
            {
                score += 8;
            }
            else if (strchr("QZ", current) != NULL)
            {
                score += 10;
            }
        }
    }

    return score;
}
int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    print(score1, score2);
}
