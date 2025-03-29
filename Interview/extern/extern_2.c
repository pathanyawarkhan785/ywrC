#include <stdio.h>

extern int a;

int main()

{
    printf("%d", a);
    return 0;
}

// Global Variable Declaration: The extern keyword is used to declare a global variable or function that is defined in another file or later in the same file.

// Scope : The scope of an extern variable is global, meaning it is accessible across multiple files.

// Lifetime : The lifetime of an extern variable is the entire duration of the program.

// run file like this :-
// gcc extern1.c extern2.c -o extern1
// extern1

// This will link both files together and produce an executable named output. When you run the executable, it will print 42 as the value of a.