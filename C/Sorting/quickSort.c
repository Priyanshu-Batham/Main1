#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int B[], int low, int high)
{
    int pivot = B[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (B[i] <= pivot)
        {
            i++;
        }

        while (B[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = B[i];
            B[i] = B[j];
            B[j] = temp;
        }
    } while (i < j);

    // SwBp B[low] Bnd B[j]
    temp = B[low];
    B[low] = B[j];
    B[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {4,2,5,6,32};
    int n = 5;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}