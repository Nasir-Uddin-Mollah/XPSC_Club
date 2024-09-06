#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        m[l]++;
        m[r + 1]--;
    }
    ll ans = 0, cur = 0;
    for (auto &&[x, y] : m)
    {
        cur += y;
        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}