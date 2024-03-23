#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s;
    cin >> n >> s;
    ll cnt = 0;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            ll k = s - i - j;
            if (k >= 0 && k <= n)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}