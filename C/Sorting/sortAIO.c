#include <stdio.h>
#include <conio.h>
#define SIZE 5

void bsort(int *arr, int size);
void isort(int *arr, int size);
void ssort(int *arr, int size);
void qsort(int *arr, int size);
void printer(int *arr, int size);

int main()
{
    int array[SIZE] = {4,2,5,3,1};
    int opChoice, searchChoice, sortChoice;
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
                    printf("\nUnder Maintanence\n");
                    break;

                case 2:
                    printf("\nUnder Maintanence\n");
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
                printf("4:Exit\n");
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
                    break;

                default:
                    printf("\nInvalid Choice\n");
                }

            } while (sortChoice != 4);
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