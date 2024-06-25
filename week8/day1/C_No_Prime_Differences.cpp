#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n + 1, vector<int>(m + 1));
        int val = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                v[i][j] = val;
                val++;
            }
        }
        for (int i = 2; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        // for (int i = 1; i < n; i += 2)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         cout << i * m + j << " ";
        //     }
        //     cout << endl;
        // }
        // for (int i = 0; i < n; i += 2)
        // {
        //     for (int j = 1; j <= m; j++)
        //     {
        //         cout << i * m + j << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }

    return 0;
}