#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = 0, j = 1;
        while (k > 0)
        {
            if (k % 2 == 1)
            {
                ans = (ans + j) % mod;
            }
            k /= 2;
            j = (j * n) % mod;
        }
        cout << ans << endl;
    }

    return 0;
}