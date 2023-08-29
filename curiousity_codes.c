//if and else using void directive
#include <stdio.h>

int main(void){
                                                     //bad coding pattern (pangit)                       
    if (4 > 5) printf("True\n"); 
    else printf("false\n");

    
}
// if and else using int directive with return 0 value

#include <stdio.h>

int main(){

    if (5 > 4) printf("true\n");
    else printf("false\n");

    return 0;
}

//
#include <stdio.h>

int main(){

    int num1,num2,sum;

    printf("enter any number: ");
    scanf("%d", &num1);

    printf("enter any number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("SUM: %d", sum);

    return 0;
}