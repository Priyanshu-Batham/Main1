#include<iostream>
#include<stdio.h>
#define SIZE 50
using namespace std;

void sorter(char *arr,int len);

int main(){
    int i,count = 0;
    char str[SIZE];
    cout<<"Enter a stream of characters:";
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
        count++;
    }
    sorter(str, count);
    puts(str);
    return 0;
}


//sorter
void sorter(char *arr,int len){
    int i,j;
    char temp;
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if((int)arr[i] > (int)arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}