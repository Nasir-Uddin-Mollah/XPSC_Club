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
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        auto it = upper_bound(v.begin(), v.end(), m);
        cout << it - v.begin() << endl;
        // int l = 0, r = n - 1, ans = -1;
        // while (l <= r)
        // {
        //     int mid = (l + r) / 2;
        //     if (m >= v[mid])
        //     {
        //         ans = mid;
        //         l = mid + 1;
        //     }
        //     else
        //         r = mid - 1;
        // }
        // cout << ans + 1 << endl;
    }

    return 0;
}