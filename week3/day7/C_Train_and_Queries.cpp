#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; ++i)
        {
            mp[v[i]].push_back(i);
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (mp[l].empty() || mp[r].empty())
            {
                cout << "NO\n";
            }
            else if (l == r)
            {
                cout << "YES\n";
            }
            else if (mp[l].front() < mp[r].back())
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}