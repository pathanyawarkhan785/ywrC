#include <stdio.h>
#include <string.h>

typedef struct book
{
    char name[20];
    int page;
} book;

int main()

{
    book books[10]; // here we created structure array

    strcpy(books[0].name, "Se7en");
    books[0].page = 99;

    strcpy(books[1].name, "Mind Hunter");
    books[1].page = 100;

    strcpy(books[2].name, "Smile");
    books[2].page = 109;

    strcpy(books[3].name, "Psychology of Money");
    books[3].page = 199;

    for (int i = 0; i < 4; i++)
    {
        printf("\n---------------Book %d----------------\n", i + 1);
        printf("Book Name: %s\n", books[i].name);
        printf("Book Page: %d\n", books[i].page);
    }

    return 0;
}