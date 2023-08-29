// FORMAT SPECIFIERS

#include <stdio.h>

int main (){
// /*  
//     %c = character      
//     %s = character array
//     %f = float
//     %lf = double
//     %d = boolean
//     %d or %c = character as numeric value
//     %d or %c = character as numeric value
//     %d = short
//     %d = unsigned short
//     %d = integer
//     %d = unsigned integer
//     %lld = long2x integer
//     %llu = unsigned long2x integer

//     %.1 = decimal precision
//     %1 = minimum field width (right align)
//     %- = left align
//     c
// */
    float height = 5.75;
    float wingspan = 5.77;
    char name[] = "gino";
    

    printf("your height is: %.2f\n",height);
    printf("you have a cm wingspan of: %.2f\n",wingspan);
    printf("test name: %s",name);

    return 0;
}