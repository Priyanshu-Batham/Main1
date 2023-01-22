#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// #include<cstdlibh>
int main(){
    struct rec{
        int no;
        char name[10];
        float salary;
    }rec1;

    printf("size of no:%d\n",sizeof(rec1.no));
    printf("size of name:%d\n",sizeof(rec1.name));
    printf("size of salary:%d\n",sizeof(rec1.salary));
    printf("size of rec1:%d\n",sizeof(rec1));
    return 0;
}