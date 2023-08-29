#include <stdio.h>

int main(){

    int age;

    printf("How old are you? ");
    scanf("%d", & age);

    if(age >10 && age <=14){
        printf("you are under early adolescent");
    }                                                              
    
    else if(age <= 17 && age >15){
        printf("you are under middle adolescent");
    }                                                   // THIS CODE HAS A THRESHOLD

    else if(age >18 && age <=24){
        printf("you are under late adolescent");
    }

    else{
        printf("you are yet to become an early adolescent");
    }

    return 0;
}