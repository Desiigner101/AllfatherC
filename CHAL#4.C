//Write a C program to accept two integers and check whether they are equal or not.
//Test Data : 15 15

#include <stdio.h>

int main() {
    int int1;
    int int2;

    printf("Input the value of int1: ");
    scanf("%d", &int1);

    printf("Input the value of int2: ");
    scanf("%d", &int2);

    if (int1 == int2) {
        printf("\nNumbers one and two are equal");
    } 
    
    else{
        printf("ODD NUMBER!");
    }

    return 0;
}
