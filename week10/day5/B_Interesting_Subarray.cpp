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
        vector<ll> v(n);
        for (auto &&i : v)
        {
            cin >> i;
        }
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            if (abs(v[i] - v[i - 1]) >= 2)
            {
                cout << "YES\n";
                cout << i << " " << i + 1 << endl;
                ok = true;
                break;
            }
        }
        if (!ok)
            cout << "NO\n";
    }

    return 0;
}