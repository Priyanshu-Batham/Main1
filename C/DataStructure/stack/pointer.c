#include<stdio.h>
#include<conio.h>
void main(){
    int* ptr;
    int a=2;
    ptr=&a;
    printf("%d\n",&ptr);    
    printf("%d\n",&a);    
}