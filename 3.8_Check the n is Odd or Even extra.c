#include<stdio.h>
int main()
{

    int a = 10;   // Dividend
    int b = 3;    // Divisor
    int quotient = a / b;  // Integer part of the division
    int remainder = a - (quotient * b);  // Subtract to find the remainder

    if(remainder == 0){
         printf("number is even\n");
    }
    else {
         printf("number is odd\n");
    }

    return 0;

}
