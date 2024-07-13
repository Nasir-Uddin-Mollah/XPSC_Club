#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        ll ans = 0;
        map<ll, ll> mp;
        pbds<ll> p;
        for (ll i = 0; i < n; i++)
        {
            ans += p.order_of_key(v[i]) + mp[v[i]];
            p.insert(v[i]);
            mp[v[i]]++;
        }

        cout << ans << endl;
    }

    return 0;
}