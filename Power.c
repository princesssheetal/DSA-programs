#include<stdio.h>
int power(int ,int);
int main()
{
    int p,b,i;
    printf("\n enter base");
    scanf("%d",&b);
    printf("\n enter expo");
    scanf("%d",&p);
    i=power(b,p);
    printf("res %d",i);
}
int power(int b,int p)
{
        int t;
    if(p==0)
        return 1;
        t=power(b,p/2);
     if(p%2==0)
        return(t*t);
    else
        return(b*t*t);

}
