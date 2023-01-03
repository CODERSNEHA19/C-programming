// QUICK SORT
#include <stdio.h>

int partition(int *arr, int s, int e)
{
    int pivot=arr[s];
    int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
            c++;
    }
    c=c+s;
    //placing the pivot at right position
    int temp=arr[c];
    arr[s]=temp;
    arr[c]=pivot;

    // postioning the left and right elements
    int i=s, j=e;
    while(i<c && j>c)
    {
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<c && j>c)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    return c;
}
void quick(int *arr, int s, int e)
{
    if(s>=e)
        return;

    // partition karenge
    int p= partition(arr,s,e);

    //sort the left part
    quick(arr,s,p-1);

    //sort the right part
    quick(arr,p+1,e);
}
void display(int *arr, int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quick(arr,0,n-1);
    display(arr,n);
}