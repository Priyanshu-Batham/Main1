#include<stdio.h>

//Array Printer
int Printer(int *Arr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
    return 0;
}

//Sorter
int Sorter(int *Arr,int n){
    int i,j,key;
    for(i=1;i<=n-1;i++){
        key=Arr[i];
        j=i-1;
        while(j>=0 && Arr[j]>key){
            Arr[j+1]=Arr[j];
            j--;
        }
        Arr[j+1]=key;
    }
    return 0;

}


//Executing the stuff :)
int main(){
    int A[50];
    int i,n;

    //inputing numbers from user
    printf("How many numbers to sort:");
    scanf("%d",&n);
    printf("Input %d elements\n",n);
    for(i=0;i<n;i++){
        printf("%d element:",i+1);
        scanf("%d",&A[i]);
    }

    //calling functions for sorting and printing the sorted array
    Sorter(A,n);
    printf("\nSorted Array: ");
    Printer(A,n);
    return 0;
}