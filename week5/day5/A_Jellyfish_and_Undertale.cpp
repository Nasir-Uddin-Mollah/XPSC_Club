#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        ll sum = b;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] + 1 <= a)
                sum += v[i];
            else
                sum += a - 1;
        }
        cout << sum << endl;
    }

    return 0;
}