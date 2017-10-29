#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {

    // check number of arguments
    if (argc != 2) {
        // inform user of proper usage
        printf("Usage: ./caesar k\n");
        return 1;
    }
    printf("%s\n", argv[1]);

    int k = atoi(argv[1]);

    int key = k % 26;

    printf("key is %i\n", key);

}