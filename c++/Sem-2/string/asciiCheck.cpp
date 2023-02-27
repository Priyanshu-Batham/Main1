#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i;
    char word[50];

    cout<<"Enter a string:";
    gets(word);

    for(i=0; word[i] != '\0'; i++){

        if(word[i] == word[i+1]-1){
            cout<<word[i]<<word[i+1];
        }
    }
    return 0;
}