#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
        int a,b;
        Parent(int x, int y){
            a = x;
            b = y;
        }
        ~Parent(){}

        void out(){
            cout<<a<<endl;
            cout<<b<<endl;
        }
};

class Child:public Parent{
    public:
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};




int main(){
    Child c;
    c.out();

    return 0;
}
