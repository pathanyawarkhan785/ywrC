#include <stdio.h>
#include <string.h>

typedef struct book
{
    int page;
    char name[20];

} book;

int main()

{
    book book1;
    book1.page = 200;
    strcpy(book1.name, "Se7en");

    printf("%s\n", book1.name);
    printf("%d\n", book1.page);

    // In structure, pointer point to first variable in structure same as array

    book *addressOfBook1 = &book1; // here we stored address of book1 in a variable

    // printf("%d\n", addressOfBook1);
    // printf("%d\n", &book1.page);

    return 0;
}