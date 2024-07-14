#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        pbds<ll> s;
        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
            s.insert(v[i].second);
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += s.order_of_key(v[i].second);
            s.erase(v[i].second);
        }
        cout << ans << "\n";
    }
    return 0;
}