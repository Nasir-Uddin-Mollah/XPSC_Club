#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q, t = 1;
    while (cin >> n >> q && (n != 0 || q != 0))
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << t++ << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end() && x == *it)
                cout << x << " found at " << it - v.begin() + 1 << endl;
            else
                cout << x << " not found" << endl;

            // int l = 0, r = n - 1, ans = -1;
            // while (l <= r)
            // {
            //     int mid = (l + r) / 2;
            //     if (x == v[mid])
            //     {
            //         ans = mid;
            //         r = mid - 1;
            //     }
            //     else if (x <= v[mid])
            //     {
            //         r = mid - 1;
            //     }
            //     else
            //         l = mid + 1;
            // }
            // if (ans == -1)
            //     cout << x << " not found" << endl;
            // else
            //     cout << x << " found at " << ans + 1 << endl;
        }
    }

    return 0;
}