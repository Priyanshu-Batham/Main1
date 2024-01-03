#include<iostream>
#include<bits/stdc++.h>

int main(){

    vector<pair<int, int>> ans;
    ans.push_back({4,1});
    ans.push_back({2,3});
    ans.push_back({1,3});

    sort(ans.begin(), ans.end());

    for(i: ans){
        cout<<i.first<<i.second<<endl;
    }
    return 0;
}