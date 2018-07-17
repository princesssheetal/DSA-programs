#include<stdio.h>
#include<math.h>
#define max 100
void nqueen(int k,int n,int x[])
{
    int i,j ,c;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k-1;j++)
        {
              if(x[j]==i || abs(x[j]-i)==abs(j-k))
              {
              break;
              }
        }
        if(j==k)
        {
        x[k]=i;
        if(k==n)
        {

            printf("\n sol array no =");
            for(i=1;i<=n;i++)
            {
                printf(" %d\t",x[i]);
                c++;
            }
            printf("\n");


        }
        else
        nqueen(k+1,n,x);
        }
    }
}
main()
{
    int x[max];
    int n;
    printf(" \n enter queen ");
    scanf("%d",&n);
    nqueen(1,n,x);
}
