#include<iostream>
using namespace std;

long long int no_of_subarrays(long n,long arr[]) {
    // Write your code here.
    long zero = 0,count = 0,i;
    for(i = 0; i < n; i++){
        if(arr[i] == 0){
            zero++;
        }
        else{
            count += zero*(zero+1) / 2;
            zero = 0;
        }
    }
    count += zero*(zero+1) / 2;
    return count;
}

int main(){
    int array[] = {0,0,1,0};
    cout<<no_of_subarrays(4,array);
    return 0;
}

