#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll mx = max(a, b), mn = min(a, b);
        if (mx > 2 * mn || (a + b) % 3 != 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}