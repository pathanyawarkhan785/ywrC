#include <stdio.h>

void foo(void);
void bar(void);

int main()

{
    foo();
    bar();
    printf("main\n");

    return 0;
}

// void foo(void): Explicitly specifies that the function takes no arguments.
// void foo(): Implies that the function takes an unspecified number of arguments (less clear and not recommended in modern C).
// It's generally a good practice to use void foo(void) to avoid any ambiguity and make it clear that the function does not take any parameters.

void foo(void)
{

    printf("foo!\n");
}

void bar(void)
{
    printf("bar!\n");
}