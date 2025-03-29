#include <stdio.h>
#include <string.h>

typedef struct book
{
    int page;
    char name[20];

} book;

void newBook(book book1)
{
    printf("%d\n", book1.page);
    printf("%s\n", book1.name);
    return;
}

void change(book book1)
{
    strcpy(book1.name, "Shoe Dog");
    book1.page = 200;
    return;
}

int main()

{
    book book1;
    book1.page = 199;
    strcpy(book1.name, "Se7en");

    change(book1);  // here we change value first but it craetes deep copy so original values remain same
    newBook(book1); // here we print values and got original value, not modifiable value.

    return 0;
}