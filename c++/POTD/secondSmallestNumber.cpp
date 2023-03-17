#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

class Solution{
    public:
    string secondSmallest(int S, int D){
        string result;
        int num,i,j,from,to,digit,count = 0,sum = 0,exp;
        from = pow(10, D-1)+1;
        to = pow(10, D);

        cout<<"From:"<<from<<endl;
        cout<<"To:"<<to<<endl;

        for(num = from; num < to; num++){
            exp = num;
            while(exp != 0){
                digit = exp % 10;
                sum = sum + digit;
                exp = exp / 10;
            }
            cout<<"SUM of digits:"<<sum<<endl;
            if(sum == S){
                count++;
            }
            if(count == 2){
                result = to_string(sum);
                return result;
            }
        }

        if(count != 2){
            return "-1";
        }
    }
};

int main(){
    string res;
    Solution S1;
    res = S1.secondSmallest(16, 3);
    cout<<res;
    cout<<"hello";
    return 0;
}