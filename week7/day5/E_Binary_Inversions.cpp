#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll inversioncnt(vector<ll> v, ll n)
{
    ll ans = 0, cnt1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt1++;
        }
        else
            ans += cnt1;
    }
    return ans;
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
        ll ans = inversioncnt(v, n);

        ll idx = -1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                v[i] = 1;
                idx = i;
                break;
            }
        }
        ans = max(ans, inversioncnt(v, n));
        if (idx != -1)
            v[idx] = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
                break;
            }
        }
        ans = max(ans, inversioncnt(v, n));
        cout << ans << endl;
    }

    return 0;
}