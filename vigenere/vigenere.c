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
        printf("Usage: ./vigenere key - != 2\n");
        return 1;
    }
    // check if any character is nonalphabetic
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            // inform user of proper usage
            printf("Usage: ./vigenere key - !alpha\n");
            return 1;
        }
    }

    // store the argument as the key and also store the keylength
    string key = argv[1];
    int keylen = strlen(argv[1]);

    // get string from user
    printf("plaintext: ");
    string plaintext = get_string();

    // prepare to print output
    printf("ciphertext: ");

    // initialize a count of characters to wrap around the key
    int count = 0;

    // iterate through each character in the string and print result without storing it
    for (int i = 0, plainlen = strlen(plaintext); i < plainlen; i++)
    {
        // if the character is alphabetic, cipher it
        if (isalpha(plaintext[i]))
        {
            // select the key character, make uppercase, and adjust it by 65
            int shift = toupper(key[count]) - 'A';

            // set refers to uppercase or lowercase
            int set;
            if (isupper(plaintext[i]))
            {
                set = 'A';
            }
            else // if lowercase
            {
                set = 'a';
            }
            // convert ASCII indexed char subtracting the set value, add the shift value, mod by 26,
            // then convert alpha index back to ASCII based on upper or lower case
            int ciphered = ((plaintext[i] - set + shift) % 26) + set;
            // increment the character count of the key
            count++;
            // ensure the count goes back to 0 if we've reached the end of the key length
            count = count % keylen;
            // finally, print result to screen
            printf("%c", ciphered);

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