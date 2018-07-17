#include<stdio.h>
#include<conio.h>
void heap_sort(int [],int);
void build_max_heap(int [],int);
void max_heapify(int [],int ,int);
int main()
{
    int i,heapsize,n,a[20];
    heapsize=n;
    printf("\n enter the no of elements");
    scanf("%d",&n);
    printf("\n enter %d elements",n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("\n elements before sorting");
    for(i=1;i<=n;i++)
        printf(" %d ",a[i]);
    heap_sort(a,n);
    printf("\n elements after sorting");
    for(i=1;i<=n;i++)
        printf(" %d ",a[i]);
    return 0;
}
void heap_sort(int a[20],int n)
{
    int i,temp,heapsize;
    heapsize=n;
    build_max_heap(a,n);
    for(i=heapsize;i>=2;i--)
    {
        temp=a[heapsize];
        a[heapsize]=a[1];
        a[1]=temp;
        heapsize=heapsize-1;
        max_heapify(a,heapsize,1);
    }
}
void build_max_heap(int a[20],int n)
{
    int i,heapsize;
    heapsize=n;
    for(i=(n/2);i>=1;i--)
    {
        max_heapify(a,heapsize,i);
    }
}
void max_heapify(int a[20],int heapsize,int i)
{
    int temp,r,lrg,l;
    l=(2*i);
    r=l+1;
    if(l<=heapsize && a[l] >a[i])
        lrg=l;
    else
        lrg=i;
    if(r<=heapsize && a[r] >a[lrg])
        lrg=r;
    if(lrg!=i)
    {
        temp=a[i];
        a[i]=a[lrg];
        a[lrg]=a[i];
        max_heapify(a,heapsize,lrg);
    }

}
