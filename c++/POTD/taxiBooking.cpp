#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int mintime = INT_MAX;
        for(int i = 0;i < N; i++){
            mintime = min(mintime, abs(cur - pos[i])*time[i]);
        }
        return mintime;
    }
};

int main(){
    vector<int> pos = {1,5,6};
    vector<int> time = {2,3,1};
    Solution S;
    cout<<S.minimumTime(3,4,pos,time);
    return 0;
}