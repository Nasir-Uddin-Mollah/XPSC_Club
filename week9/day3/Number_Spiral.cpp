#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll mx = max(n, m), sqr = (mx - 1) * (mx - 1);
        if (mx % 2 == 0)
        {
            if (m > n)
                cout << sqr + n << endl;
            else
                cout << mx * mx - m + 1 << endl;
        }
        else
        {
            if (m > n)
                cout << mx * mx - n + 1 << endl;
            else
                cout << sqr + m << endl;
        }
    }

    return 0;
}