#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Call(int x, int y, int n, int m, vector<vector<int>> v)
{
    ll sum = 0;
    int idx = 0;
    while (x - idx >= 0 && y - idx >= 0)
    {
        sum += v[x - idx][y - idx];
        idx++;
    }
    idx = 0;
    while (x - idx >= 0 && y + idx < m)
    {
        sum += v[x - idx][y + idx];
        idx++;
    }
    idx = 0;
    while (x + idx < n && y + idx < m)
    {
        sum += v[x + idx][y + idx];
        idx++;
    }
    idx = 0;
    while (x + idx < n && y - idx >= 0)
    {
        sum += v[x + idx][y - idx];
        idx++;
    }

    return sum - 3 * v[x][y];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                sum = max(sum, Call(i, j, n, m, v));
            }
        }
        cout << sum << endl;
    }
    return 0;
}