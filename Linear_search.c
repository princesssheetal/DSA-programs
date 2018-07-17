#include<stdio.h>
void insert(int [],int);
void display(int [],int);
int linear_search(int [],int,int);
int main()
{
        int i,a[20],n,key;
        printf("\n enter the no of element");
        scanf("%d",&n);
        printf("\n enter %d elements",n);
        insert(a,n);
        printf("\n enter the elements to be serch");
        scanf("%d",&key);
        i=linear_search(a,n,key);
        if(i!=-1)
            printf("\n element found at %d pos ",i);
        else
            printf("\n element not found");


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
    printf("\n %d ",a[i]);

}
int linear_search(int a[20],int n,int key)
{
    int i=1,loc=-1;
    while(loc==-1 && i<=n)
    {
        if(key == a[i])
        loc=i;
        i++;
    }

return(loc);

}

