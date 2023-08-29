// challenge #1 Write a program in C to display the first 10 natural numbers.

#include <stdio.h>

void main(){                                    // difference between void and int mains is that, Void doesn't return any value whilst int does.
    int i;

    printf("first 10 natural numbers are:\n");
    for (i = 1; i <=10; i++){
        printf("%d\n", i);
    }         
printf("\n");

}