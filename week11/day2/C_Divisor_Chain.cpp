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
        vector<ll> v;
        ll i = 0;
        v.push_back(n);
        while ((1 << i) < n)
        {
            if ((1 << i) & n)
            {
                n ^= (1 << i);
                v.push_back(n);
            }
            i++;
        }
        while (n > 1)
        {
            v.push_back(n / 2);
            n /= 2;
        }
        cout << v.size() << endl;
        for (auto &&i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}