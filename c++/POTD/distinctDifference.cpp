#include <iostream>
#include <vector>
#include<set>
using namespace std;

class Solution
{
public:
    vector<int> getDistinctDifference(int N, vector<int> &A)
    {
        // code here
        vector<int> ans,left(N,0),right(N,0);
        set<int> unique;
        int i;

        for(i = 0; i < N; i++){
            left[i] = unique.size();
            unique.insert(A[i]);
        }
        unique.clear();
        
        for(i = N-1; i >=0; i--){
            right[i] = unique.size();
            unique.insert(A[i]);
        }

        for(i = 0; i < N; i++){
            ans.push_back(left[i] - right[i]);
        }

        return ans;
    }
};

int main()
{
    Solution S1;
    vector<int> B = {4, 4, 3, 3};
    vector<int> res;
    res = S1.getDistinctDifference(4, B);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
