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
        vector<int> v2(n), v;
        map<int, int> mp, mp2;
        for (auto &&i : v2)
        {
            cin >> i;
            mp[i]++;
        }
        for (auto &&i : mp)
        {
            int x = i.first;
            int y = i.second;
            if (x <= n)
            {
                for (int i = 1; i < y; i++)
                {
                    v.push_back(x);
                }
                mp2[x] = 1;
            }
            else
            {
                for (int i = 1; i <= y; i++)
                {
                    v.push_back(x);
                }
            }
        }
        // for (auto &&i : v)
        // {
        //     cout << i << " ";
        // }
        // cout << endl;

        int cnt = 1, ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = cnt; j <= n; j++)
            {
                if (mp2[j] == 1)
                    cnt++;
                else
                    break;
            }
            int x = (v[i] - 1) / 2;
            if (cnt <= x)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}