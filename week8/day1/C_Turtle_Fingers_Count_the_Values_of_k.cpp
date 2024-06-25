#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
        // set<ll> ans;
        // for (ll i = 0; i < 20; i++)
        // {
        //     for (ll j = 0; j < 20; j++)
        //     {
        //         ll powab = pow(a, i) * pow(b, j);
        //         if (l % powab == 0)
        //         {
        //             ans.insert(l / powab);
        //         }
        //     }
        // }
        // cout << ans.size() << endl;
        vector<ll> divofl, x, y;
        for (ll i = 1; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                divofl.push_back(i);
                if (l / i != i)
                    divofl.push_back(l / i);
            }
        }
        for (ll i = 0; i < 20; i++)
        {
            x.push_back(pow(a, i));
            y.push_back(pow(b, i));
        }
        ll ans = 0;
        for (ll i = 0; i < divofl.size(); i++)
        {
            bool ok = false;
            for (ll j = 0; j < x.size(); j++)
            {
                for (ll k = 0; k < y.size(); k++)
                {
                    if (divofl[i] * x[j] * y[k] == l)
                    {
                        ans++;
                        ok = true;
                        break;
                    }
                }
                if (ok)
                    break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}