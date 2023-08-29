// SWITCH (Comes in handy when else if's are abundant)
#include <stdio.h>

int main(){
    char grade;

    printf("Input your grade: ");
    scanf("%c", & grade);

    switch (grade){             // note: Special logical operators does not operate in SWITCHES==========================================================
    case 'A':
    case 'a':
        printf("Perfect!\n");
        break;
    
    case 'B':
    case 'b':
        printf("You did good!\n");
        break;

    case 'C':
    case 'c':
        printf("You did okay\n");
        break;

    case 'D':
    case 'd':
        printf("Atleast it's not F\n");
        break;

    case 'F':
    case 'f':
        printf("FAILED\n");
        break;
    
    default:
        printf("INPUT A VALID GRADE\n");
        break;
    }

    return 0;
}