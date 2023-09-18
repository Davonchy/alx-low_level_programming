#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
char* argument;
    /*Check if there are at least two arguments (the program name and one additional argument)*/
    if (argc < 2) {
        printf("Usage: %s <argument>\n", argv[0]);
        return 1; /*Return an error code*/
    }

    /*Access and handle the command-line argument*/
    argument = argv[1];

    if (strcmp(argument, "--input") == 0) {
        if (argc >= 3) {
            printf("Input file: %s\n", argv[2]);
        } else {
            printf("Error: --input requires a filename argument.\n");
            return 1; /*Return an error code*/
        }
    } else if (strcmp(argument, "--output") == 0) {
        if (argc >= 3) {
            printf("Output file: %s\n", argv[2]);
        } else {
            printf("Error: --output requires a filename argument.\n");
            return 1; /* Return an error code*/
        }
    } else {
        printf("Unknown argument: %s\n", argument);
        return 1;
    }

    return 0;
}
