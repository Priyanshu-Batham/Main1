#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> search(string pat, string txt)
        {
            //preparing the LPS array
            vector<int> ans;
            
            vector<int> lps(2, 0);
            int count = 0;
            for(int i = 1; i<pat.size(); i++){
                if(pat[i] == pat[count]){
                    count++;
                    lps.push_back(count);
                }
                else{
                    count = 0;
                    lps.push_back(count);
                }
            }
            
            pat = '_' + pat;
            
            //using LPS and performing KMP
            int i = 0, j = 0;
            
            while(i < txt.size()){
                
                //if the characters match
                if(txt[i] == pat[j+1]){
                    // if full pattern is found
                    if(j == pat.size()-2){
                        j = lps[j]+1;
                        ans.push_back(i-(pat.size()-3));
                    }
                    // if full pattern is not yet found
                    else{
                        j++;
                    }
                    i++;
                }
                
                // if characters don't match:
                // if j!= 0
                else if(j != 0){
                    j = lps[j];
                }
                // if j==0
                else{
                    i++;
                }
                
            }
            return ans;
        }
int main(){
    
    return 0;
}