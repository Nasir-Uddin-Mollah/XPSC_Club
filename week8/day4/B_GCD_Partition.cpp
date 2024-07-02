#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
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
        for (auto &&i : v)
        {
            cin >> i;
        }
        ll sum = accumulate(v.begin(), v.end(), 0);

        vector<ll> pref(n), suff(n);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = pref[i - 1] + v[i];
        }
        suff[n - 1] = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff[i] = suff[i + 1] + v[i];
        }

        ll ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, gcd(pref[i], suff[i + 1]));
        }
        cout << ans << endl;
    }

    return 0;
}