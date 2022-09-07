#include <stdio.h>

void bubbleSort(int *A, int n){
        int temp;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        for (int j = 0; j < n-1-i; j++) // For comparison in each pass
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
            
        }
        
    }
    
}

void bubbleSortAdaptive(int *A, int n){
        int temp;
        int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1); 
        isSorted = 1;
        for (int j = 0; j < n-1-i; j++) // For comparison in each pass
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
            
        }
        if (isSorted)
        {
            return;
        }
        
        
    }
    
}

void printArray(int * A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    
}

int main()
{
    int n = 7;
    //int A[] = {1, 23, 4, 65, 34, 8, 45};
    int A[] = {1,2,3,4,5,6,7};
    printArray(A, n);
    // bubbleSort(A, n);
    bubbleSortAdaptive(A, n);
    printArray(A, n);
    return 0;
}