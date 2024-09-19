#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> x(n), y(n);
        vector<ll> dif(n);

        for (auto &i : x)
            cin >> i;
        for (auto &i : y)
            cin >> i;
        for (ll i = 0; i < n; i++)
        {
            dif[i] = y[i] - x[i];
        }
        sort(dif.rbegin(), dif.rend());

        // ll i = 0, j = n - 1, cnt = 0;

        // while (i < j)
        // {
        //     while (dif[i] + dif[j] < 0)
        //         j--;
        //     if (j <= i)
        //         break;
        //     cnt++;
        //     i++;
        //     j--;
        // }
        // cout << cnt << endl;
        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (dif[l] > -1 and dif[r] > -1)
            {
                ans++;
                l++, r--;
            }
            else if (dif[l] < 0 and dif[r] < 0)
            {
                break;
            }
            else if (dif[l] > -1)
            {
                if (dif[l] >= abs(dif[r]))
                {
                    ans++;
                    l++, r--;
                }
                else
                {
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}