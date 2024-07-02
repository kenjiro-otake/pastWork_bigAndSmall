// Kenjiro Otake
// 12.1.2022
// Period 8
//

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int compute_score(string word);

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!, 1: %i, 2: %i \n", score1, score2);
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins! , 1: %i, 2: %i \n", score1, score2);
    }
    else if (score1 == score2)
    {
        printf("Tie! 1: %i, 2: %i \n", score1, score2);
    }

}

int compute_score(string word)
{
    int score = 0;
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char letter[]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int s = strlen(word);

    for (int i = 0; i < s; i++)
    {
        word[i] = toupper(word[i]);
        for (int j = 0; j < 26; j++)
        {
            if (word[i] == letter[j])
            {
                score = score + points[j];
            }
        }
    }
    return score;
}