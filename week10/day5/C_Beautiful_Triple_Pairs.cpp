#include <bits/stdc++.h>
using namespace std;
#define ll long long
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

        map<pair<ll, ll>, ll> ab, bc, ac;
        map<tuple<ll, ll, ll>, ll> ab3, bc3, ac3;

        ll ans = 0;

        for (ll i = 0; i < n - 2; ++i)
        {
            ll a = v[i];
            ll b = v[i + 1];
            ll c = v[i + 2];

            ab[{a, b}]++;
            bc[{b, c}]++;
            ac[{a, c}]++;

            tuple<ll, ll, ll> triple = make_tuple(a, b, c);
            ab3[triple]++;
            bc3[triple]++;
            ac3[triple]++;

            ans += ab[{a, b}] - ab3[triple];
            ans += bc[{b, c}] - bc3[triple];
            ans += ac[{a, c}] - ac3[triple];
        }

        cout << ans << endl;
    }
    return 0;
}