#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*merge function merges the sorted halves
called through the mergesort function*/
void merge(char *a,int l,int mid,int u)
{
    int i=l;
    int j=mid+1;
    int k=l;
    char b[100];
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
void mergesort(char *a,int l,int u)//recursively splits array then merges the sorted parts
{
    int mid;
    if(l<u)//checks if array can be split further
    {
      mid=(l+u)/2;
       mergesort(a,l,mid);
       mergesort(a,mid+1,u);
       merge(a,l,mid,u);
    }
}
void main()//main function takes string as input and outputs sorted string using mergesort
{
   char s[100];
   printf("Enter the string:");
   gets(s);
   int n=strlen(s);
   mergesort(s,0,n-1);
   printf("%s",s);
}
