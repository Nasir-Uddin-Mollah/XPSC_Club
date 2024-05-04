#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll res = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        ll ans = 0;
        ll mn = INT_MAX;
        ll mx = INT_MIN;
        ll sub = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1)
            {
                ans += v[n - k - 1];
                mn = min(mn, v[n - k - 1]);
                mx = max(mx, v[n - k - 1]);
                sub++;
            }
        }
        if (sub > 1 && (mx - mn >= x) && (ans >= l && ans <= r))
            res++;
    }
    cout << res << endl;
}
