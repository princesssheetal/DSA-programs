#include<stdio.h>
int k;
void count(int [],int);
int main()
{
    int a[20],i,n;
    printf("\n enter size of array");
    scanf("%d",&n);
    printf("\n enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n  elements before srt");
    for(i=0;i<n;i++)
    {
        printf("\n %d\t",a[i]);
    }
    count(a,n);
}
void count(int a[],int n)
{ int i,j,b[30],c[30];
    k=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>k)
        k=a[i];
    }

    for(i=0;i<=k;i++)
        c[i]=0;
    for(j=0;j<n;j++)
        c[a[j]]=c[a[j]]+1;
    for(j=1;j<=k;j++)
        c[j]=c[j]+c[j-1];
    for(i=(n-1);i>=0;i--)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]=c[a[i]]-1;
    }
    printf("\n after srt elements");
    for(i=1;i<=n;i++)
    {
        printf("%5d",b[i]);
    }

}
