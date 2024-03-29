#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, ll> mp;
    ll l = 0, r = 0, ans = 0, totalelement = 0;
    while (r < n)
    {
        if (mp[a[r]] == 0)
            totalelement++;
        mp[a[r]]++;
        while (totalelement > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                totalelement--;
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
    return 0;
}