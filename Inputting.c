//Inputting in C language

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){

    char name[25];    
    int age;
    float height;

    printf("\nWhat is your name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);             //use code fgets(name, 25, stdin) to allow whitespaces
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("\nHow tall are you %s? ", name);
    scanf("%f", &height);

    printf("\nOh hi %s, it's nice to meet you",name);
    printf("\nyou are %d years old", age);
    printf("\nwow you are tall with a height of %.2f, in feet your height is 5'8\n", height);

    return 0;

}