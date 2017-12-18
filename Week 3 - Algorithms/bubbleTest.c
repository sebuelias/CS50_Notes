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
        char swap;

        for (int i = 0; i < n; i++)
        {
            counter = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (word[j] > word[j+1])
                {
                    counter++;

                    swap = word[j]; //temporarily assigns left-side index to variable
                    word[j] = word[j+1]; //switches left-side index with right-side
                    word[j+1] = swap; //assigns right-side index to temp variable
                }
            }

            if (counter == 0)
            {
                break;
            }
        }
        printf("%s\n", word);
    }

return 0;
}
