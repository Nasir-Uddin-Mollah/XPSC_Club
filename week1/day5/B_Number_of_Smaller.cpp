#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (r < m)
    {
        while (l < n && a[l] < b[r])
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }
    cout << "\n";
    return 0;
}