#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p;
    p=(int *) malloc(2);
    *p=23;
    printf("%d\n",p);
    printf("%d\n",*p);
}