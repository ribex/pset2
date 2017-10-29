#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
     // check number of arguments
    if (argc != 2)
    {
        // inform user of proper usage
        printf("Usage: ./vigenere key\n");
        return 1;
    }
    for (int i = 0, len = strlen(argv[1]); i < len; i++) {
        if (!isalpha(atoi(argv[i])))
        {
            // inform user of proper usage
            printf("Usage: ./vigenere key\n");
            return 1;
        }
    }


    printf("\n");
    return 0;
}