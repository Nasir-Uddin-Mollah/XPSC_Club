#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool ok(vector<ll> v, ll n, ll k)
{
    multiset<ll> s;
    for (auto i : v)
    {
        s.insert(i);
    }

    for (ll i = 1; i <= k; i++)
    {
        if (s.empty())
            return false;
        ll req = k - i + 1;
        auto it = s.upper_bound(req);
        if (it == s.begin())
            return false;
        it--;

        s.erase(it);
        if (!s.empty())
        {
            it = s.begin();
            ll x = *it;
            x += req;
            s.erase(it);
            s.insert(x);
        }
    }
    return true;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll k;
        ll l = 0, r = n;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (ok(v, n, mid))
            {
                k = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}
