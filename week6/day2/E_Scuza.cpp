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
        vector<ll> v(n + 1), pref(n + 1), mx(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            pref[i] = pref[i - 1] + v[i];
            mx[i] = max(mx[i - 1], v[i]);
        }
        for (int i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            auto it = upper_bound(mx.begin(), mx.end(), x) - mx.begin() - 1;
            cout << pref[it] << " ";
        }
        cout << endl;
    }

    return 0;
}