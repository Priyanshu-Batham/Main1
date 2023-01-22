#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter a number:";
    cin>>n;
    int counter=0;
    for(counter;counter<=n;counter++){
        sum+=counter;
    }
    cout<<"the sum of numbers before"<<n<<"="<<sum;
    return 0;
}