#include<stdio.h>
void matrix(int [],int);
void printo(int,int);
int m[7][7],s[7][7];
int main()
{
    int p[14],i;
    printf("\n enter elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&p[i]);
    }
    matrix(p,5);
    printo(1,4);

}
void matrix(int p[],int n)
{
    int i,j,l,q,k;
    for(i=1;i<=n;i++)
    {
    m[i][i]=0;
        for(l=2;l<=n;l++)
        {
            j=i+l-1;
            m[i][j]=999;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[j]*p[k];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                }
                s[i][j]=k;
            }
        }
}
}
void printo(int i,int j)
{
    if(i==j)
        printf("a %d",i);
    else
    {
        printf("(");
        printo(i,s[i][j]);
        printo(s[i][j]+1,j);
        printf(")");
    }
}

