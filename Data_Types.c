// Data types in C language

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