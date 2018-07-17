#include<stdio.h>
int fibo(int);
int main()
{
    int n,h;
    printf("\n enter the num");
    scanf("%d",&n);
     h=fibo(n);
    printf("res = %d",h);
}
int fibo(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return(fibo(n-1)+fibo(n-2));
}
