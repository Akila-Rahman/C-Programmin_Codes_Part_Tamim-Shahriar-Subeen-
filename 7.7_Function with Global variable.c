#include<stdio.h>

double pi = 3.14;

void test_function()
{
    pi = 3.1416;//change the pi value
    return;
}



int main()
{


    printf("%lf\n",pi);/* pi = 3.14*/
    test_function();
    printf("%lf\n",pi);/* pi = 3.1416 because it using test_function */



    return 0;
}









