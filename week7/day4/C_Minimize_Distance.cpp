#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        vector<ll> pos, neg;
        ll ans = 0;

        for (ll i : v)
        {
            if (i > 0)
            {
                pos.push_back(i);
            }
            else
            {
                neg.push_back(abs(i));
            }
        }

        sort(pos.rbegin(), pos.rend());
        sort(neg.rbegin(), neg.rend());

        if (neg.empty())
        {
            for (ll i = 0; i < pos.size(); i += k)
            {
                ans += 2 * pos[i];
            }
            ans -= pos.front();
        }
        else if (pos.empty())
        {
            for (ll i = 0; i < neg.size(); i += k)
            {
                ans += 2 * neg[i];
            }
            ans -= neg.front();
        }
        else
        {
            for (ll i = 0; i < pos.size(); i += k)
            {
                ans += 2 * pos[i];
            }
            for (ll i = 0; i < neg.size(); i += k)
            {
                ans += 2 * neg[i];
            }
            ans -= max(pos.front(), neg.front());
        }

        cout << ans << endl;
    }

    return 0;
}