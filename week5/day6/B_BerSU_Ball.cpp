#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int m;
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++)
    {
        cin >> g[i];
    }
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((abs(b[i] - g[j])) <= 1)
            {
                cnt++;
                g[j] = INT_MAX;
                break;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}