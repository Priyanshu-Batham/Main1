#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(string pat){
    vector<int> arr(pat.size(),0);
    int i=0;
    int j=1;
    while(j<pat.size())
    {
            while(i>0 and pat[i]!=pat[j])
        {
            i--;
        }
            
        if(pat[i]==pat[j])
        {
            arr[j]=i+1;
            i++;
        }
        else
        arr[j]=0;
            
        j++;
    }

    for(auto it = arr.begin(); it!=arr.end(); it++){
        cout<<*it;
    }
}

int main(){
    f("dbcdddeaaeeddaeacbccecedbdccaecadcdeecdddedebcbcdcddaacacbaaddeccccbcbcedeacdeeedbddcebbcedcbaabccdabecaaecaadeaacacd");
    return 0;
}