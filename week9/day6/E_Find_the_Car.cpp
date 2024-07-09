#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k), b(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        while (q--)
        {
            ll d;
            cin >> d;
            if (d == 0)
            {
                cout << 0 << " ";
                continue;
            }
            if (d == n)
            {
                cout << b[k - 1] << " ";
                continue;
            }

            auto it = upper_bound(a.begin(), a.end(), d) - a.begin();
            if (it == 0)
            {
                ll dist = a[it];
                ll time = b[it];
                cout << (d * time) / dist << " ";
            }
            else
            {
                ll ans = b[it - 1];

                ll dis = a[it] - a[it - 1];
                ll time = b[it] - b[it - 1];

                ll extra_dis = d - a[it - 1];
                ll time_to_d = (extra_dis * time) / dis;
                ans += time_to_d;

                cout << ans << " ";
            }
        }
        cout << endl;
    }
    return 0;
}