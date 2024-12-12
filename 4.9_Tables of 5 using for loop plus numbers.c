#include<stdio.h>
int main()
{
    int m;
    int p = 5;
    int i;

    m = 0;

    for( i=1;i<=10;i++ )
    {
        m = m + p;
        printf("%d X %d = %d\n",p, i, m);


    }


    return 0;
}






