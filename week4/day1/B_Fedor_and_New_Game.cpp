#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> all_mask;
    for (int i = 0; i <= m; i++)
    {
        vector<int> a;
        for (int k = 0; k < n; k++)
        {
            if ((v[i] >> k) & 1)
                a.push_back(1);
            else
                a.push_back(0);
        }
        all_mask.push_back(a);
    }
    int ans = 0;
    vector<int> fedor_mask = all_mask[m];
    for (int i = 0; i < m; i++)
    {
        vector<int> a = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor_mask[k] != a[k])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}