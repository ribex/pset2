#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    // get input from the user; we assume the user puts single spaces only
    string name = get_string();

    if (name != NULL){

        // grab the first char
        char first = name[0];
        // but only print if it's not a space
        if (first != 32) {
            // capitalize the char
            first = toupper(first);
            printf("%c", first);
        }

        // loop through the rest of the name string to find letters after spaces
        for (int i = 0, len = strlen(name); i < len - 1; i++) {
            // if the character is a space (32)
            if (name[i] == 32) {
                // if the next character is not a space
                if (name[i + 1] != 32) {
                    // print the next character, capitalized
                    char initial = toupper(name[i + 1]);
                    printf("%c", initial);
                }
            }
        }
        // end with a newline
        printf("\n");
    }

}