#include <stdio.h>

int main(int argc, char const *argv[])
{
    // prints the number of command-line arguments.
    // argc: An integer representing the number of command - line arguments.

    printf("Number of command line arguments: %d\n", argc);

    // Looping Through Arguments:
    // The for loop iterates over each command-line argument and prints it using printf.
    // argv[]: An array of strings(character pointers), with each element pointing to a command - line argument.
    // Since argv[i] are strings (char pointers), you use %s to print them with printf

    int i = 0;
    // while (i < argc)
    // {
    //     printf("%s\n", argv[i]);
    //     i++;
    // }

    return 0;
}