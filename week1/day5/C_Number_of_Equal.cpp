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
    while (l < n && r < m)
    {
        int count1 = 0, count2 = 0, cur = a[l];
        while (a[l] == cur && l < n)
        {
            count1++;
            l++;
        }
        while (b[r] < cur && r < m)
        {
            r++;
        }

        while (b[r] == cur && r < m)
        {
            count2++;
            r++;
        }
        ans += (1LL * count1 * count2);
    }
    cout << ans << "\n";
    return 0;
}