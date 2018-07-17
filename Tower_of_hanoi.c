#include<stdio.h>
int cnt=0;
void tow(int ,char,char,char);
main()
{
    int n;
        printf("\n no of disk");
        scanf("%d",&n);
        tow(n,'s','a','d');
        printf("\n total no of steps =%d",cnt);
}
void tow(int n,char s,char a,char d)
{
    if(n==1)
    {
        printf("\n step %d; %c->%c",++cnt,s,d);
        return;
    }
    tow(n-1,s,d,a);
        printf("\n step %d;%c->%c",++cnt,s,d);
        tow(n-1,a,s,d);
}
