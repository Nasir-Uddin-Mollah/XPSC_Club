#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    auto pos = [&](ll x)
    {
        return x > 0;
    };
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &&i : v)
        {
            cin >> i;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll mx = v[i];
            ll j = i;
            while (j < n && pos(v[i]) == pos(v[j]))
            {
                mx = max(mx, v[j]);
                j++;
            }
            ans += mx;
            i = j - 1;
        }
        cout << ans << endl;
    }

    return 0;
}