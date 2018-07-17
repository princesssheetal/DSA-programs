#include<stdio.h>
void insert(int [],int);
void display(int [],int);
int binary_search(int [],int,int,int);
int main()
{
    int i,n,a[20],key;
    printf("\n enter the no of elements");
    scanf("%d",&n);
    printf("\n enter %d elements",n);
    insert(a,n);
    printf("\n enter the  element to b searched");
    scanf("%d",&key);
    i=binary_search(a,0,n-1 ,key);
    if(i!=-1)
          printf("\n element found at %d pos",i);
    else
          printf("\n  element not found");

    return 0;

}
void insert(int a[20],int n)
{
    int i;
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
}
void display(int a[20],int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf(" %d ",a[i]);
}
int binary_search(int a[20],int lb, int ub,int key)
{
   int beg,end,mid,loc=-1;
   beg=lb;
   end=ub;
   while(beg <= end && loc==-1)
   {
    mid=(beg+end)/2;
    if(key==a[mid])
        loc=mid;
    else if(key<a[mid])
        end=mid-1;
    else
        beg=mid+1;
    }
    return(loc);
}





