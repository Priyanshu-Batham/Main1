#include <stdio.h>
#include<math.h>
#include <conio.h>
#define SIZE 5

void bsort(int *arr, int size);
void isort(int *arr, int size);
void ssort(int *arr, int size);

void qsort(int *arr, int low, int high);
int partition(int arr[], int low, int high);

void bktsort(int arr[], int size);

void printer(int *arr, int size);

void lsearch(int *arr, int size);
void bsearch(int *arr, int size);

int main()
{
    int array[SIZE] = {4, 2, 5, 3, 1};
    int opChoice, searchChoice, sortChoice;
    printf("\n");
    printer(array, SIZE);
    printf("\n");
    do
    {
        printf("\nWhich Operation to perform?\n");
        printf("1:Searching\n");
        printf("2:Sorting\n");
        printf("3:Exit\n");
        printf("Choice:");
        scanf("%d", &opChoice);
        switch (opChoice)
        {
        case 1:
            do
            {
                printf("\nWhich Searching to perform?\n");
                printf("1:Linear Search\n");
                printf("2:Binary Search\n");
                printf("3:Exit\n");
                printf("Choice:");
                scanf("%d", &searchChoice);
                switch (searchChoice)
                {
                case 1:
                    lsearch(array, SIZE);
                    break;

                case 2:
                    bsearch(array, SIZE);
                    break;

                case 3:
                    break;

                default:
                    printf("\nInvalid Choice\n");
                }

            } while (searchChoice != 3);
            break;
        case 2:
            do
            {
                printf("\nWhich Sorting to perform?\n");
                printf("1:Insertion Sort\n");
                printf("2:Selection Sort\n");
                printf("3:Bubble Sort\n");
                printf("4:Quick Sort\n");
                printf("5:Bucket Sort\n");
                printf("6:Exit\n");
                printf("Choice:");
                scanf("%d", &sortChoice);
                switch (sortChoice)
                {
                case 1:
                    printf("\nUnsorted:");
                    printer(array, SIZE);
                    isort(array, SIZE);
                    printf("\nSorted:\t");
                    printer(array, SIZE);
                    break;

                case 2:
                    printf("\nUnsorted:");
                    printer(array, SIZE);
                    ssort(array, SIZE);
                    printf("\nSorted:\t");
                    printer(array, SIZE);
                    break;

                case 3:
                    printf("\nUnsorted:");
                    printer(array, SIZE);
                    bsort(array, SIZE);
                    printf("\nSorted:\t");
                    printer(array, SIZE);
                    break;

                case 4:
                    printf("\nUnsorted:");
                    printer(array, SIZE);
                    qsort(array, 0, SIZE - 1);
                    printf("\nSorted:\t");
                    printer(array, SIZE);
                    break;

                case 5:
                    printf("\nUnsorted:");
                    printer(array, SIZE);
                    bktsort(array, SIZE);
                    printf("\nSorted:\t");
                    printer(array, SIZE);
                    break;

                case 6:
                    break;

                default:
                    printf("\nInvalid Choice\n");
                }

            } while (sortChoice != 6);
            break;

        case 3:
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (opChoice != 3);
    return 0;
}

// ------------------------------------------ INSERTION SORT ---------------------------------------->
void isort(int *arr, int size)
{
    int i, j, temp;

    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// ------------------------------------------ SELECTION SORT ---------------------------------------->
void ssort(int *arr, int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// ------------------------------------------ BUBBLE SORT ---------------------------------------->
void bsort(int *arr, int size)
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ------------------------------------------ QUICK SORT ---------------------------------------->
void qsort(int *arr, int low, int high)
{
    int sortedElem;

    if (low < high)
    {
        sortedElem = partition(arr, low, high);
        qsort(arr, low, sortedElem - 1);
        qsort(arr, sortedElem + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int num = arr[low];
    int i = low + 1, j = high, temp;

    do
    {
        while (arr[i] <= num)
        {
            i++;
        }
        while (arr[j] > num)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

// --------------------------BUCKETSORT---------------------------->>>
void bktsort(int arr[], int size)
{
    int bucket[10][10];
    int num, mod1, mod2, row, column;
    int mainLoop, max = 0, maxItr = 0;
    int i, j;
    
    for(i = 0; i <= size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    while(max > 0){
        max = max /10;
        maxItr++;
    }

    // the main sorting loop should be iterated upto length of each number
    for (mainLoop = 1; mainLoop <= maxItr; mainLoop++)
    {

        // filling the bucket with -1
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                bucket[i][j] = -1;
            }
        }

        // traversing through the array to fetch and process data
        for (i = 0; i < size; i++)
        {
            mod1 = pow(10, mainLoop);
            mod2 = pow(10, mainLoop - 1);
            row = (arr[i] % mod1) / mod2;

            column = 0;
            while (bucket[row][column] != -1)
            {
                column++;
            }

            bucket[row][column] = arr[i];
        }

        // filling the actual array with sorted stuff
        num = 0;
        for(i = 0; i <= 9; i++){
            for(j = 0; j <= 9; j++){
                if(bucket[i][j] != -1){
                    arr[num] = bucket[i][j];
                    num++;
                }
            }
        }


        // enable this to see the contents of bucket after every iteration
        // printf("-------------------------------\n");
        // for (i = 0; i < 10; i++)
        // {
        //     for (j = 0; j < 10; j++)
        //     {
        //         printf("%d ", bucket[j][i]);
        //     }
        //     printf("\n");
        // }
        // printf("-------------------------------\n");
    }
}

// ------------------------------------------ LINEAR SEARCH---------------------------------------->
void lsearch(int *arr, int size)
{
    int i, data;
    printf("Enter the Number:");
    scanf("%d", &data);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == data)
        {
            printf("\n%d is found at %d position\n", data, i + 1);
            break;
        }
    }
    if (i == size)
    {
        printf("\n%d not found\n", data);
    }
}

// ------------------------------------------ BINARY SEARCH---------------------------------------->
void bsearch(int *arr, int size)
{
    int first, last, mid;
    int i, j, data, flag = 0;
    printf("Enter the Number:");
    scanf("%d", &data);

    bsort(arr, size);
    printer(arr, size);

    first = 0;
    last = size - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == data)
        {
            printf("\n%d found at %d position\n", data, mid + 1);
            flag = 1;
            break;
        }
        else if (arr[mid] > data)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("\n%d not found\n", data);
    }
}

// ------------------------------------------ PRINTER ---------------------------------------->
void printer(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
