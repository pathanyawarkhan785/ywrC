#include <stdio.h>

typedef struct person
{
    int age;
    float weight;
} person;

int main()

{
    person x;
    person *person1 = &x;

    person1->age = 22;
    person1->weight = 40.2;

    printf("%d\n", x.age);
    printf("%f\n", x.weight);

    return 0;
}