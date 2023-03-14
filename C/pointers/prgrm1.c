#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[] = {3,2,1};
    int *p = a+1;

    printf("%d\n",*p);
    printf("%d",*p-1);

    return 0;
}

