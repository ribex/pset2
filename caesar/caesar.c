#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {

    if (argc != 2) {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    printf("%s\n", argv[1]);

}