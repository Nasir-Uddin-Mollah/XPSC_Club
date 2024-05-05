#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n+1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += i;
        }
        sort(v.begin(), v.end());
        ll ans = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (sum + v[i] > c)
                break;
            sum += v[i];
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}