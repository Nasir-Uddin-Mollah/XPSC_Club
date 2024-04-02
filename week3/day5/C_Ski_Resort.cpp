#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
                cnt++;
            else
                cnt = 0;
            if (cnt >= k)
                ans += cnt - k + 1;
        }
        cout << ans << endl;
    }

    return 0;
}