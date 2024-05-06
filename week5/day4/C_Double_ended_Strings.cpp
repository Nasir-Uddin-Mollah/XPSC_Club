#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size(), ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int k = 0;
                while ((i + k) < n && (j + k) < m && a[i + k] == b[j + k])
                {
                    k = k + 1;
                }
                ans = max(ans, k);
            }
        }
        cout << (n - ans) + (m - ans) << endl;
    }

    return 0;
}