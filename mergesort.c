#include<stdio.h>
#include<stdlib.h>
void merge(int *a,int l,int mid,int u)//sorting element in inc. order
{
    int i=l;
    int j=mid+1;
    int k=l;
    int b[u];
    while(i<=mid &&j<=u)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
         {
           b[k]=a[j];
           j++;
         }
         k++;
    }
    if(i>mid)
    {
        while(j<=u)
        {
            b[k]=a[j];
           j++;
           k++;
        }
    }
    else
    {
       while(i<=mid)
        {
            b[k]=a[i];
           i++;
           k++;
        }
    }
   for(k=l;k<=u;k++)
        a[k]=b[k];
}
void mergesort(int *a,int l,int u)//breaking the element
{
    int mid;
    if(l<u)
    {
      mid=(l+u)/2;
       mergesort(a,l,mid);
       mergesort(a,mid+1,u);
       merge(a,l,mid,u);
    }
}
void main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("\nenter array:");
    for(int i=0;i<n;i++)
     scanf("%d",&ar[i]);
     mergesort(ar,0,n);
     printf("Sorted array:");
     for(int j=0;j<n;j++)
     printf(" %d ",ar[j]);
}
