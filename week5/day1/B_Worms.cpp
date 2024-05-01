#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto it = lower_bound(pre.begin(), pre.end(), q[i]);
        cout << it - pre.begin() + 1 << endl;
    }

    return 0;
}