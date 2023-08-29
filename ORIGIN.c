//Variables-----------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main (){

    int x;      //declaration
    x = 101;    //initialization

    int age = 19;           //declaration + initialization (easy way)
    float gpa = 4.7;        //floating point number
    char grade = 'B';       //single character
    char name[] = "Gino";   //array of characters

    printf("your name is %s\n",name);    //in order to input a certain variable into texts use format specifiers
    printf("you have a grade point average of %.1f\n",gpa);  //always use newline \n to add newline to a code
    printf("your grade is %c\n",grade);
    printf("your age is %d\n",age);

    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n"); // to skip a space use \t and to make a newline use \n
    printf("\"I need more buolets\" - izhraul"); // to enable or input a quote in between strings use OUT and IN backslash (\"example\")

    return 0;
}

// Data types in C language------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main (){

    //  DATA TYPES                        DEFINITION                       FORMAT SPECIFIER
    char a = 'g';                        // single character                    #c
    char b[] = "name";                   // array of characters                 #s

    float c = 3.141592;                  //4 bytes (32 bits of precision) 6 - 7 digits        #f
    double d = 3.1415926535897932;       //8 bytes (64 bits of precision) 15 - 16 digits      #lf

    bool e = true;                       // 1 byte (true of false)          #d

    char f = 100;                        // 1 byte (-128 to + 127)          #d or #c
    unsigned char g = 255;               // 1 byte (0 to + 255)             #d or #c

    short int h = 32767;                 // 2 bytes (-32,768 to +32,767)    #d
    unsigned int i = 65535;              // 2 bytes (0 to +65, 535)         #d

    int j = 3123;                              // 4 bytes (-2,147,483,648 to +2,147,483,647) #d
    unsigned int k = 12321;              // 4 bytes (0 to +4,294,967,295)              #u

    long long int l = 2371832321362;                  // 8 bytes (-9 quintillion to +9 quintillion)  #lld
    unsigned long long int m = 3131231237128U;            // 8 bytes (0 to +18 quintillion)              #llu
    
    printf("%c\n", a);   //char
    printf("%s\n", b);   //character array
    printf("%.6f\n", c);   //float
    printf("%lf\n", d);  // double f
    printf("%d\n", e);   // boolean 
    printf("%d\n", f);    //char as numeric value
    printf("%d\n", g);   //unsigned char as numeric value
    printf("%d\n", h);   //short
    printf("%d\n", i);   //unsigned short
    printf("%d\n", j);   //integer
    printf("%d\n", k);   //unsigned integer
    printf("%lld\n", l); //long2x integer
    printf("%lld\n", m); //unsigned long2x integer
    

    return 0;
}

// FORMAT SPECIFIERS---------------------------------------------------------------------------------------------------------------------

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

//Arithmetic operators-------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main(){

    // + (additio)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    int x = 5;
    int y = 2;

    int z = x / y;
    x++;
    y--;

    printf ("%d",z);

    return 0;

}   

// Augmented Assignment Operators (shortcut)----------------------------------------------------------------------------------------
#include <stdio.h>
#include<stdbool.h>

int main (){

    int x = 10;

    // x = x + 4;       //this applies to all arithmetics operators (e.g., +, -, *, %, /)
    x+= 1;

    printf("%d",x);


    return 0;
}

//Inputting in C language

#include <stdio.h>
#include <stdbool.h>

int main (){

    char name[25];
    int age;
    float height;

    printf("\nWhat is your name? ");
    scanf("%s", &name);

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("\nHow tall are you %s? ", name);
    scanf("%f", &height);

    printf("\nOh hi %s, it's nice to meet you",name);
    printf("\nyou are %d years old", age);
    printf("\nwow you are tall with a height of %.2f, in feet your height is 5'8\n", height);

    return 0;

}
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

//challenge #1 Write a program in C to display the first 10 natural numbers.

#include <stdio.h>

void main(){                                    // difference between void and int mains is that, Void doesn't return any value whilst int does.
    int i;

    printf("first 10 natural numbers are:\n");
    for (i = 1; i <=10; i++)
    {
        printf("%d\n", i);
    }         

printf("\n");
}

//challenge #2 add any number using input

#include <stdio.h>
int main(){
    
    int numOne;
    int numTwo;

    printf("enter any number: ");
    scanf("%d", & numOne);

    printf("enter any number: ");
    scanf("%d", & numTwo);

    int sum = numOne + numTwo;

    printf ("SUM: %d\n", sum);

    return 0;
}


//challenge #3 Write a program that displays the equal numbers from 1 to 10 using for loop

#include <stdio.h>
int main (){
    int count = 0;

    for (int numbers = 1; numbers <= 10; numbers++){
        if (numbers % 2 == 0){
            count ++;
            printf("%d\n", numbers);
        }
    }
    printf("Therefore there are %d equal numbers", count);

    return 0;
}