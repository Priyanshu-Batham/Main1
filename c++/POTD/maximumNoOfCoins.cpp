#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxCoins(int N, vector<int> &a)
    {
        // write your code here
        int i, coins = 0, mid;

        for (i = N; i > 0; i--)
        {
            if (i % 2 == 0)
            {
                mid = i / 2;
                mid--;
            }
            else
            {
                mid = i / 2;
            }

            if (a.size() == 2)
            {
                coins += a[0] * a[1];
                a.erase(a.begin());
            }
            else if (a.size() == 1)
            {
                coins += a[0];
                a.erase(a.begin());
            }
            else
            {
                coins += a[mid - 1] * a[mid] * a[mid + 1];
                a.erase(a.begin() + (mid));
            }
        }
        return coins;
    }
};

int main()
{
    Solution s1;
    vector<int> a = {3, 6, 6, 2, 6, 1, 8, 7, 9, 2};
    cout << s1.maxCoins(10, a);
    return 0;
}