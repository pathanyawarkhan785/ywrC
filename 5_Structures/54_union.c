// In C, a union is a special data type that allows you to store different data types in the same memory location.It is similar to a struct, but with a crucial difference : all members of a union share the same memory location.This means that at any given time, a union can store only one of its members.

#include <stdio.h>
#include <string.h>

int main()

{
    typedef union person
    {
        int age;
        float weight;
        char c;
        char name[10];
    } person;

    person person1;
    person1.age = 24;
    person1.weight = 71;
    person1.c = 'Y';
    strcpy(person1.name, "Yawar");

    printf("%d\n", person1.age);
    printf("%f\n", person1.weight);
    printf("%c\n", person1.c);
    printf("%s\n", person1.name);
    return 0;
}