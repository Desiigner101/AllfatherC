// Conditional Stamements Code (ADOLESCENT CHART)-----------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main (){

    int age;

    printf("How old are you? ");
    scanf("%d", & age);

    if (age <= 14){
        printf("you are under early adolescence");

    }                                                              // this code has no threshold============

    else if (age <= 17){
        printf("you are under middle adolescence");

    }

    else if (age <= 24){
        printf("you are under late adolescence");

    }
    
    return 0;
}