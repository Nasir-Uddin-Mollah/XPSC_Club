#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    vector<ll> d(n + 1);
    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    sort(v.rbegin(), v.rend());
    sort(d.rbegin(), d.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i] * d[i]);
    }

    cout << ans << endl;

    return 0;
}