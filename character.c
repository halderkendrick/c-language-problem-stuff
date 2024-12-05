#include <stdio.h>

int main()
{
    char name [20];
    int age;
    char gender [20];
    printf("Enter Name: ");
    fgets(name, 20, stdin);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Gender: ");
    scanf("%s", gender);
    printf("I'm %s.\n", name);
    printf("I'm %d years old.\n", age);
    printf("I'm a %s.", gender);
    return 0;
}
