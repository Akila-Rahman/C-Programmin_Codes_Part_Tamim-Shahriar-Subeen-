#include<stdio.h>

int find_max(int p[], int n);//Prototype

int main()
{

    int p[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int max = find_max(p,n);
    printf("%d\n",max);

    return 0;
}



int find_max(int p[], int n)

{
    int max = p[0];
    int i;


    for(i=1; i< n; i++){
        if (p[i] > max){
            max =  p[i];
        }
    }
    return max;
}












