#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll maxN = 2e9;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        auto ok = [&](ll mid)
        {
            ll w = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] < mid)
                {
                    w += mid - v[i];
                }
            }
            return w <= x;
        };
        ll l = 1, r = maxN, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }

    return 0;
}