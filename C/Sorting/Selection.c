#include<stdio.h>

//Array Printer
int Printer(int *arr,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//sorter
int sorter(int *arr,int len){
    int i,j,temp;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int arr[50],len,i;
    printf("Enter the number of values:");
    scanf("%d",&len);
    for(i=0;i<=len-1;i++){
        printf("Enter %d number:",i+1);
        scanf("%d",&arr[i]);
    }
    sorter(arr,len);
    Printer(arr,len);
    return 0;
}