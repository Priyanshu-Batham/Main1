#include <stdio.h>
#include <stdlib.h>

// utility function for printing the array
void printer(int arr[], int size){
    int i = 0;
    printf("\n");
    for(i; i<size; i++){
        printf("%d  ", arr[i]);
    }
}

// function to sort the left and right part of m of array
void merge(int arr[], int l, int m , int r){
    int i,j,k;
    int s1,s2;
    s1 = m-l+1;
    s2 = r-m;

    int larr[s1], rarr[s2];
    for(i = 0; i<s1; i++){
        larr[i] = arr[l+i];
    }
    for(i = 0; i<s2; i++){
        rarr[i] = arr[m+1+i];
    }

    i = 0;
    j = 0;
    k = l;

    while(i<s1 && j<s2){
        if(larr[i] <= rarr[j]){
            arr[k] = larr[i];
            i++;
        }
        else{
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }

    while(i<s1){
        arr[k] = larr[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    int m;
    if(l<r){
        m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main(){
    int arr[100];
    int i,size;
    printf("Enter the Number of Elements:");
    scanf("%d", &size);
    for(i = 0; i<size; i++){
        printf("Enter %d element:", i+1);
        scanf("%d", &arr[i]);
    }
    
    printer(arr, size);
    mergeSort(arr, 0, size-1);
    printer(arr, size);

    return 0;
}