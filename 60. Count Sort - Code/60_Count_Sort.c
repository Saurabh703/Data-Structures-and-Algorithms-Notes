#include <stdio.h>
#include<limits.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int * A, int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
        
    }
    return max;
    
}

void countSort(int * A, int n){
    int i, j;
    int max = maximum(A, n);

    int * count = (int *) malloc((max+1) * sizeof(int));

    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;   
    }

    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    
    i = 0; 
    j = 0;

    while (i<=max)
    {
        if(count[i] > 0){
            A[j] = i; 
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
        
    }
    
}

int main()
{
    int A[] = {12, 4, 26, 8, 3, 18, 8, 34, 25};
    int n = 9;
    printArray(A, n);
    countSort(A, n);
    printArray(A, n);
    return 0;
}