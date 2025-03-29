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
}

int main()

{
    book book1;
    book1.page = 199;
    strcpy(book1.name, "Se7en");

    newBook(book1);

    return 0;
}