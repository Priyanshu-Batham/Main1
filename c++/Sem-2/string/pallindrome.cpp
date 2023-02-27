#include<iostream>
#include<stdio.h>
using namespace std;

int isPallindrome(char word[], int ctr);

int main(){
    int i,j=1,ctr = 1, a;
    char str[50], word[10];
    cout<<"Enter a sting:";
    gets(str);

    word[0] = str[0];

    for(i=1; str[i] != '\0'; i++){
        if(str[i] == ' '){
            word[j] = str[i+1];
            j++;
            ctr++;
        }
    }
    word[j] = '\0';
    puts(word);

    if(isPallindrome(word,ctr)){
        cout<<"It is pallindrome";
    }
    else{
        cout<<"Its not pallindrome";
    }
    return 0;
}

int isPallindrome(char word[], int ctr){
    int i = 0,j = ctr-1,flag = 0;
    while(i != j){
        if(word[i] != word[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag == 0){
        return 1;
    }
    else{
        return 0;
    }
}
