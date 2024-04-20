#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll ans = 1, XOR = a[0];
        for (int i = 1; i < n; i++)
        {
            if (XOR >= a[i])
                XOR ^= a[i];
            else
            {
                XOR = a[i];
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}