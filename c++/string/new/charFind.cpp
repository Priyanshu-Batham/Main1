#include<iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i;

    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    cin>>toSearch;

    i=0;
    while(str[i]!='\0')
    {
        if(str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }

        i++;
    }

    return 0;
}