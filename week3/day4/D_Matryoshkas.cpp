#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t, n, i, j, ans;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n);

        vector<pair<ll, ll>> b;

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        for (int i = 0; i < n;)
        {
            int j = i;

            while (i < n && a[i] == a[j])
            {
                i++;
            }

            b.push_back({a[j], i - j});
        }

        ll m = b.size();

        ans = b[0].second;

        for (int i = 1; i < m; i++)
        {
            if (b[i].first - 1 == b[i - 1].first)
            {
                ans += max(b[i].second - b[i - 1].second, 0ll);
            }
            else
            {
                ans = ans + b[i].second;
            }
        }

        cout << ans << "\n";
    }
}