//challenge #3 Write a program that displays the equal numbers from 1 to 10 using for loop

#include <stdio.h>
int main (){
    int count = 0;

    for (int numbers = 1; numbers <= 10; numbers++){
        if (numbers % 2 == 0){
            count ++;
            printf("%d\n", count);  
        }
    }
    printf("Therefore there are %d equal numbers", count);

    return 0;
}