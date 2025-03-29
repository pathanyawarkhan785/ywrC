#include <stdio.h>
#include <string.h>

struct phone
{
    int no;
    char name[];
};

// if you declared structure like below no need to write "struct phone ywr;" this line

// struct phone
// {
//     int no;
//     char name[];
// } ywr;

int main()

{

    struct phone ywr;

    ywr.no = 1;                // for assigning value you can use dot to access variables.
    strcpy(ywr.name, "yawar"); // In C, you can't directly assign a string literal to a character array. Instead, you should use strcpy from the <string.h> library to copy the string into the array.

    printf("%d\n", ywr.no);
    printf("%s\n", ywr.name);

    struct phone abc;

    abc.no = 2;
    strcpy(abc.name, "abc");

    printf("%d\n", abc.no);
    printf("%s\n", abc.name);

    return 0;
}