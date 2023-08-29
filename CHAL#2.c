//challenge #2 add any number using input

#include <stdio.h>
int main(){
    
    int numOne, numTwo;
    // int numTwo;

    printf("enter any number: ");
    scanf("%d", & numOne);

    printf("enter any number: ");
    scanf("%d", & numTwo);

    int sum = numOne + numTwo;

    printf ("SUM: %d\n", sum);

    return 0;
}
