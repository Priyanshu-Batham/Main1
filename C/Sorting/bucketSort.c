#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 7

void bucketSort(int arr[], int size);
void printer(int arr[], int size);

void main()
{
    int array[SIZE] = {23, 254, 223, 623, 43, 85, 12};
    printer(array, SIZE);
    bucketSort(array, SIZE);
    printer(array, SIZE);
}

// --------------------------BUCKETSORT---------------------------->>>
void bucketSort(int arr[], int size)
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

// --------------------------PRINTER---------------------------->>>
void printer(int arr[], int size)
{
    int i;
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}