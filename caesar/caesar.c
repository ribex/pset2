#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {

    // check number of arguments
    if (argc != 2) {
        // inform user of proper usage
        printf("Usage: ./caesar k\n");
        return 1;
    }

    // printf("%s\n", argv[1]);

    int k = (atoi(argv[1])) % 26;

    printf("key is %i\n", k);

    printf("plaintext: ");

    string plaintext = get_string();

    printf("this was %s\n", plaintext);

    string ciphertext = "blah";

    printf("ciphertext: %s\n", ciphertext);

}