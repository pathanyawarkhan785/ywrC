#include <stdio.h>

// 1. Declaration
// Declaration tells the compiler about the type and name of the variable. It does not allocate memory for the variable; it just informs the compiler that a variable exists with a particular type.

extern int a; // Declaration

int main()

{

    // 2. Definition
    // Definition is the actual creation of the variable, where memory is allocated for it. In many cases, declaration and definition occur together.

    int a; // Definition

    // 3. Initialization
    // Initialization is the process of assigning an initial value to the variable at the time of its definition.

    int a = 5; // Definition and initialization

    // In C, when you declare a variable inside a function (like the main function in this case), you are also defining it. This means that space in memory is allocated for that variable. So, float b; within the main function is both a declaration and a definition because it tells the compiler that b exists and that it needs to allocate memory for it.

    // Another example of declaration, definition, and initialization
    float b;  // Declaration and definition
    b = 3.14; // Initialization

    return 0;
}