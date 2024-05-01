#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n), pre(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        while (q--)
        {
            int key;
            cin >> key;
            auto it = lower_bound(pre.begin(), pre.end(), key);
            if (it == pre.end())
                cout << -1 << endl;
            else
                cout << it - pre.begin() + 1 << endl;
            // if (key > pre[n - 1])
            //     cout << -1 << endl;
            // else
            // {
            //     int ans = -1;
            //     int l = 0, r = n - 1;
            //     while (l <= r)
            //     {
            //         int mid = (l + r) / 2;
            //         if (key <= pre[mid])
            //         {
            //             ans = mid;
            //             r = mid - 1;
            //         }
            //         else
            //             l = mid + 1;
            //     }
            //     cout << ans + 1 << endl;
        }
    }
    return 0;
}
