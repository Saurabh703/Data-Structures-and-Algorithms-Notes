#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
        
    } return -1;
    
}

int binarySearch(int arr[], int size, int element)
{
    int high, mid, low;
    low = 0;
    high = size-1;
    // Start search
    while (low<=high)
    {
    mid = (high + low)/2; 
    if (arr[mid]==element)
    {
        return mid;
    }
    else if (arr[mid]<element)
    {
         low = mid + 1;
    }
    else{
        high = mid - 1;
    }
  }
    // end search
    return -1;
    
}

int main()  
{
    //Unsorted array for linear search
    // int arr[]= {1,3,5,7,56,4,8,12,43,87,746,95,5};
    // int size = sizeof(arr)/sizeof(int);
    // int element = 56;
    // int searchIndex = linearSearch(arr, size,  element);

    //Sorted array for binary search
    int arr[]= {1,3,4,5,7,8,12,43,56,87,95,746};
    int size = sizeof(arr)/sizeof(int);
    int element = 8;
    int searchIndex = binarySearch(arr, size,  element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}