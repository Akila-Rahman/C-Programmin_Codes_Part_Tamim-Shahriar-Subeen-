#include<stdio.h>
int main()
{
    int number, remainder;
    number = 5;

    remainder = number % 2;

    if(remainder == 0){
         printf("number is even\n");
    }
    else {
         printf("number is odd\n");
    }

    return 0;

}
