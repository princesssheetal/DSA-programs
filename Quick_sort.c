#include<stdio.h>
void quick_sort(int [],int,int);
int partition(int [],int,int);

int main()
{
    int a[20],n,i;
    printf("\n enter the no of elements");
    scanf("%d",&n);
    printf("\n enter %d elements",n);
    {
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    }
    printf("\n  elements before sorting ");
    {
           for(i=1;i<=n;i++)
            printf(" %d ", a[i]);
    }
 quick_sort(a,1,n);
    printf("\n elements after sorting");
    {
           for(i=1;i<=n;i++)
            printf(" %d ", a[i]);
    }
    return 0;
}

void quick_sort(int a[20],int p,int r)
{
    int q;
    if(p<r)
    {
        q = partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}

int partition(int a[20],int p,int r)
{
    int i,j,temp;
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
    if(a[j] <= a[r])
    {
        i=i+1;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
    temp=a[r];
    a[r]=a[i+1];
    a[i+1]=temp;
    return(i+1);
}


