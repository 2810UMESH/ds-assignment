#include<stdio.h>
int bubblesort(int ar[],int n)
{
    int c=0;
    while(c==0)
    {
        c=1;
    for (int i=0;i<n;i++)
    {
        if(ar[i]>ar[i+1])
        {
            int t=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=t;
            c=0;
        }
    }

    }
}
void main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter array:");
    for (int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    bubblesort(ar,n);
    printf("sorted array:");
     for (int i=0;i<n;i++)
        printf("%d ",ar[i]);
}
