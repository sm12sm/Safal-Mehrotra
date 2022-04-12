/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char y = 'a';
    int a = 72;
    double c = 3.14;
    long long int b;
    long double s;
    short d;
    unsigned int x = 35;
    unsigned long int e;
    signed char r;
    float z;
    printf("the size of char data type is %d.\n", sizeof(y));
    printf("the size of int data type is %d.\n", sizeof(a));
    printf("the size of double data type is %d.\n", sizeof(c));
    printf("the size of long long int type is %d.\n", sizeof(b));
    printf("the size of long double type is %d.\n", sizeof(s));
    printf("the size of short data type is %d.\n", sizeof(d));
    printf("the size of unsigned int is %d.\n", sizeof(x));
    printf("the size of unsigned long int is %d.\n", sizeof(e));
    printf("the size of signed char is %d.\n", sizeof(r));
    printf("the size of float data type is %d.\n", sizeof(z));
    

    return 0;
}
