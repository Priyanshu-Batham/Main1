#include<iostream>
using namespace std;

class Solution {
  public:
    long long count101(long long n) {
        // code here
        long long i,j,k,count = 0;
        string str = to_string(n);
        
        for(i = 0; i < n; i++){
            if(str[i] == '1'){
                for(j = i; j < n; j++){
                    if(str[j] == '0'){
                        for(k = j; k < n; k++){
                            if(str[k] == '1'){
                                count++;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main(){
    Solution S;
    
    return 0;
}