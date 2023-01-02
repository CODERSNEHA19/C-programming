//INSERTION SORT
#include <stdio.h>

void insertion(int *arr, int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
                arr[j+1]=arr[j];
            else 
                break;
        }
        arr[j+1]=temp;
    }
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
    insertion(arr,n);
    display(arr,n);
}