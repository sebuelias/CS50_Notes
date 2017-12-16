#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        return 1;
    }

    else if (argc == 2)
    {

        string word = argv[1];
        int n = strlen(argv[1]);
        int counter = 13;

        for (int i = 0; i < n; i++)
        {
            if (word[i] > word[i+1]) {
                printf("%c ", word[i]);
            }
            counter = 0;
            for (int j = 0; j < n; j++)
            {
                //word[i] = word[i+1];
                counter++;
            }
            //printf("[%i]", counter);
        }
        printf("\n%s\n", word);
    }

return 0;
}
