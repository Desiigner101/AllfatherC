    #include <stdio.h>
//Variables-----------------------------------------------------------------------------------------------------------------------------------------
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
