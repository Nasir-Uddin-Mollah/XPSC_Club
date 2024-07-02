#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        
        while (b != 1)
        {
            ll gc = gcd(a, b);
            if (gc == 1)
                break;
            b /= gc;
        }

        if (b == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}