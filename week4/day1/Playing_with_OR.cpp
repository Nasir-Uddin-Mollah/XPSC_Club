#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll l = 0, r = 0, odd = 0, ans = 0;
        while (r < n)
        {
            if (v[r] % 2 == 1)
                odd++;
            if (r - l + 1 == k)
            {
                if (odd > 0)
                    ans++;
                if (v[l] % 2 == 1)
                    odd--;
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}