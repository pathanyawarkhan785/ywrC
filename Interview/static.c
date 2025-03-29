#include <stdio.h>

// Outside a Function (Global Variable): When a global variable is declared as static, its visibility is limited to the file in which it is declared. This means the variable cannot be accessed or used in other files, providing a way to achieve data encapsulation.

static int b = 7;

void func()
{

    // Within a Function(Local Variable) : When a variable is declared as static inside a function, its value is preserved between function calls.In other words, the variable maintains its state even after the function exits.

    static int a = 5;
    a++;
    printf("%d\n", a);
}

// Static Functions : Declaring a function as static limits its scope to the file in which it's defined. This means the function cannot be called from other files, providing a way to restrict access to the function.

static void newFunc()
{
    int a = 10;
    printf("%d", a);
}
int main()

{
    // func();
    // printf("%d", b);
    newFunc();
    return 0;
}