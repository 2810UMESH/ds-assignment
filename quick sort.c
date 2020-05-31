#include<stdio.h>
int s;
int partition(int arr[],int f,int r)
{
    int p=arr[r];
    int pIndex=f-1;
    for(int i=f;i<r;i++)
    {
        if(arr[i]<p)
        {
            int t=arr[++pIndex];
            arr[pIndex]=arr[i];
            arr[i]=t;
        }
    }
    arr[r]=arr[++pIndex];
    arr[pIndex]=p;
    return pIndex;
}
void quickSort(int arr[],int f,int r)
{
    if(f<r)
    {
        int p=partition(arr,f,r);
        quickSort(arr,f,p-1);
        quickSort(arr,p+1,r);
    }
}
void display(int arr[])
{
    for(int i=0;i<s;i++)
    {
        printf("%d,",arr[i]);
    }printf("\n");
}
void main()
{
    printf("Enter the size of the array:");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr);
    quickSort(arr,0,s-1);
    display(arr);
}
