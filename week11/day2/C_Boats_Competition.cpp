#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(n);
        for (auto &&i : cnt)
        {
            cin >> i;
        }
        sort(cnt.begin(), cnt.end());
        int ans = 0;
        for (int i = 1; i <= 100; i++)
        {
            int l = 0, r = n - 1, cur = 0;
            while (l < r)
            {
                if (cnt[l] + cnt[r] == i)
                {
                    cur++;
                    l++;
                    r--;
                }
                else if (cnt[l] + cnt[r] < i)
                    l++;
                else
                    r--;
            }
            ans = max(ans, cur);
        }
        cout << ans << endl;

        // int n;
        // cin >> n;
        // map<int, int> mp;
        // for (int i = 0; i < n; i++)
        // {
        //     int x;
        //     cin >> x;
        //     mp[x]++;
        // }
        // int ans = 0;
        // for (int i = 2; i <= (2 * n); i++)
        // {
        //     int cur = 0;
        //     for (auto &&[f, s] : mp)
        //     {
        //         int second = i - f;
        //         if (second >= 1 && mp.count(second))
        //             cur += min(s, mp[second]);
        //     }
        //     cur /= 2;
        //     ans = max(ans, cur);
        // }
        // cout << ans << endl;
    }

    return 0;
}