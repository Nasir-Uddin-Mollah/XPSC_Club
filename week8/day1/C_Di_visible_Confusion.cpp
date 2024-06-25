#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        
        bool ans = true;
        for (int i = 1; i <= n; i++)
        {
            bool ok = false;
            for (int k = 2; k <= i + 1; k++)
            {
                if (v[i] % k != 0)
                {
                    ok = true;
                    break;
                }
            }
            if (!ok)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}