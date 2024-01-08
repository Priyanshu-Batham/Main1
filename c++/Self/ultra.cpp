#include<iostream>
using namespace std;

int howManyCharsPrinted(){
    return printf("abcd");
}

int main(){
    int length = howManyCharsPrinted();
    cout<<length;
}