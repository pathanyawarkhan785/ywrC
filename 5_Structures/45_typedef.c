#include <stdio.h>
#include <string.h>

// the use of typedef to create new type names for int to INT and float to FLOAT

typedef int INT;     // here oldname(int) you are changing it to INT(newname).
typedef float FLOAT; // here oldname(float) you are changing it to FLOAT(newname).

int main()

{

    // ---------with int & float----------

    // INT x = 5;
    // FLOAT y = 2.5;

    // printf("%d\n", x);
    // printf("%f\n", y);

    // ---------with structure------------

    // typedef struct book
    // {
    //     int page;
    //     char bookName[];
    // } book;

    // book book1;
    // strcpy(book1.bookName, "Shoe Dog");
    // book1.page = 300;

    // printf("%d\n", book1.page);
    // printf("%s\n", book1.bookName);

    return 0;
}