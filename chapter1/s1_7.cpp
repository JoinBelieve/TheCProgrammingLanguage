/**
 * 实例1-7 
 */

#include <stdio.h>

int power(int m,int n);

int main()
{
    int i;
    for (i = 0; i < 15; i++)
    {
        printf("%d %d %d \n",i,power(2,i),power(-3,i));
    }
    return 0;
}

int power(int base,int n){
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * base;
    }
    return p;
}