#include <stdio.h>
#include <string.h>

int main()

{
    typedef struct book
    {
        int page;
        char name[15];
    } book;

    typedef struct comic
    {
        book normal; // here we nested book structure to comic
        char character[20];
    } comic;

    comic birbal;

    strcpy(birbal.character, "Birbal");
    strcpy(birbal.normal.name, "Se7en");
    birbal.normal.page = 100;

    printf("%s\n", birbal.character);
    printf("%s\n", birbal.normal.name);
    printf("%d\n", birbal.normal.page);

    return 0;
}