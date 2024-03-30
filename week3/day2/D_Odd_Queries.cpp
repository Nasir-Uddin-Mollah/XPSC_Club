#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n], totalsum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            totalsum += a[i];
        }
        ll pre[n];
        pre[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = a[i] + pre[i - 1];
        }

        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = 0;
            l--, r--;
            if (l == 0)
                sum = pre[r];
            else
                sum = pre[r] - pre[l - 1];

            ll tmpsum = totalsum - sum + ((r - l + 1) * k);

            if (tmpsum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}