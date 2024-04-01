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
        int p[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> p[i][j];
            }
        }
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            mp[p[i][0]]++;
            if (mp[p[i][0]] > 1)
            {
                v.push_back(p[i][0]);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i][0] != v[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    v.push_back(p[i][j]);
                }
                break;
            }
        }
        for (auto &&i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}