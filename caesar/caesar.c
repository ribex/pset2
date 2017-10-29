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
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // check 2nd argument
    // printf("%s\n", argv[1]);

    // convert 2nd aegument to an int no higher than 25
    int k = (atoi(argv[1])) % 26;

    printf("plaintext:");

    // get string from user
    string plaintext = get_string();

    printf("ciphertext:");

    // iterate through each character in the string and output result without storing it
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        // if the character is alphabetic, cipher it
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i])) {
                // convert ASCII indexed char subtracting 'A', add the key, mod by 26, then convert alpha index back to ASCII
                int ciphered = ((plaintext[i] - 'A' + k) % 26) + 'A';
                printf("%c", ciphered);
            }
            else // if lowercase
            {
                // convert ASCII indexed char subtracting 'a', add the key, mod by 26, then convert alpha index back to ASCII
                int ciphered = ((plaintext[i] - 'a' + k) % 26) + 'a';
                printf("%c", ciphered);
            }

        }
        // if the character is not alphabetic, print as is
        else
        {
            printf("%c", plaintext[i]);
        }

    }

    printf("\n");

    return 0;
}