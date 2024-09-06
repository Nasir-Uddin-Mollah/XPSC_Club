#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(100005), l(100005), r(100005), d(100005), b(100005), c(100005);
    for (ll i = 1; i <= n; i++)
        cin >> v[i];
    for (ll i = 1; i <= m; i++)
        cin >> l[i] >> r[i] >> d[i];
    for (ll i = 1; i <= k; i++)
    {
        ll x, y;
        cin >> x >> y;
        c[x] += 1;
        c[y + 1] -= 1;
    }
    
    for (ll i = 1; i <= m; i++)
        c[i] += c[i - 1];
    for (ll i = 1; i <= m; i++)
    {
        b[l[i]] += (d[i] * c[i]);
        b[r[i] + 1] -= (d[i] * c[i]);
    }
    for (ll i = 1; i <= n; i++)
        b[i] += b[i - 1];

    for (ll i = 1; i <= n; i++)
    {
        cout << v[i] + b[i] << " ";
    }
    return 0;
}