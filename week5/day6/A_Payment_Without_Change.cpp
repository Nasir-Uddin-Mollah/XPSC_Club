#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll total = (min(s / n, a) * n) + b;
        if (total >= s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}