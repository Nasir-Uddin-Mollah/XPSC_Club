#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll Call(int x, int y, int n, int m, vector<vector<int>> a)
{
    ll sum = 0;
    int indx = 0;
    while (x - indx >= 0 && y - indx >= 0)
    {
        sum += a[x - indx][y - indx];
        indx++;
    }
    indx = 0;
    while (x - indx >= 0 && y + indx < m)
    {
        sum += a[x - indx][y + indx];
        indx++;
    }
    indx = 0;
    while (x + indx < n && y + indx < m)
    {
        sum += a[x + indx][y + indx];
        indx++;
    }
    indx = 0;
    while (x + indx < n && y - indx >= 0)
    {
        sum += a[x + indx][y - indx];
        indx++;
    }

    return sum - 3 * a[x][y];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                sum = max(sum, Call(i, j, n, m, a));
            }
        }
        cout << sum << endl;
    }
    return 0;
}