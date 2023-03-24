#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeReverse(string S)
    {
        // code here
        int map[26];
        fill(map, map + 26, 0);
        for (char ch : S)
            map[ch - 'a']++;

        int i = 0, j = S.length() - 1;
        bool flag = true;
        string start = "",end = "",ans = "";
        int count = 0;

        while (i <= j)
        {
            if (flag)
            {
                if (map[S[i] - 'a'] > 1)
                {
                    map[S[i] - 'a']--;
                    flag = !flag;
                    count++;
                }
                else{
                    start += S[i];
                }
                i++;
            }
            else{
                if (map[S[j] - 'a'] > 1)
                {
                    map[S[j] - 'a']--;
                    flag != flag;
                    count++;
                }
                else{
                    end = S[j] + end;
                }
                j--;
            }
        }
        ans = start + end;
        if(count % 2 == 1) reverse(ans.begin(), ans.end());

        return ans;
    }
};