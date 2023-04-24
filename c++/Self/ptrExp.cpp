#include<iostream>
using namespace std;

void opr(int &x){
    x = 50;
}

int main(){
    int a = 10;
    opr(a);
    cout<<a;
    return 0;
}
