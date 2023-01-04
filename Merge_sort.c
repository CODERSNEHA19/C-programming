/*MERGE SORT*/

#include <stdio.h>

void merge(int *arr, int s, int e)
{
    
    int mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2= e-mid;

    int first[l1];
    int second[l2];

    // TO COPY THE VALUES TO TWO DIFFERENT ARRAYS
    int in=s;
    for(int i=0;i<l1;i++)
        first[i]=arr[in++];
    
    in = mid+1;

    for(int i=0;i<l2;i++)
        second[i]=arr[in++];

    // TO MERGE THE ARRAYS

    int index1=0;
    int index2=0;
    in=s;
    while(index1<l1 && index2<l2)
    {
        if(first[index1]<second[index2])
            arr[in++]=first[index1++];
        else
            arr[in++]=second[index2++];
    }

    while(index1<l1)
        arr[in++]=first[index1++];
    
    while(index2<l2)
        arr[in++]=second[index2++];

}

void mergeSort(int *arr, int s, int e)
{   
    if(s>=e)
        return;
     int mid=s+(e-s)/2;
    
     mergeSort(arr, s, mid);        // to sort the left part

   mergeSort(arr, mid+1, e);      // to sort the right part

   merge(arr, s, e);

}

void display(int *arr, int n)
{
     printf("display called\n");
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

        mergeSort(arr,0,n-1);
        display(arr,n);
      return 0;

}