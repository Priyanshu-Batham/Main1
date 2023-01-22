#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int *p,j=2,i;
    p=(int *) malloc(3*sizeof(int));
    //fill
    for(i=0;i<3;i++){
        p[i]=i+10;
    }
    //display
    for(i=0;i<3;i++){
        printf("%d\n",p[i]);
    }
    //trying to free
    // free(p);

    //display again
    for(i=0;i<3;i++){
        printf("%d\n",p[i]);
    }

}