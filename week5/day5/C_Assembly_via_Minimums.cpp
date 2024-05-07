#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int m = (n * (n - 1)) / 2;
        vector<ll> v(m);
        ll mx = INT_MIN;
        
        for (ll i = 0; i < m; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        sort(v.begin(), v.end());
        for (int i = 0; i < m; i += (--n))
            cout << v[i] << " ";
        cout << mx << "\n";
    }
    return 0;
}