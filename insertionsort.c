//insertion sort
#include<stdio.h>
void insertsort(int *a,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
     insertsort(ar,n);
     printf("Sorted array:");
     for(int j=0;j<n;j++)
     printf(" %d ",ar[j]);
}
