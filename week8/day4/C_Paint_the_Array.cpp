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
        ll gcdeven = 0, gcdodd = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                gcdeven = gcd(gcdeven, v[i]);
            else
                gcdodd = gcd(gcdodd, v[i]);
        }
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 and v[i] % gcdodd == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << gcdodd << endl;
            continue;
        }
        ok = true;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1 and v[i] % gcdeven == 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << gcdeven << endl;
            continue;
        }
        cout << 0 << endl;
    }

    return 0;
}