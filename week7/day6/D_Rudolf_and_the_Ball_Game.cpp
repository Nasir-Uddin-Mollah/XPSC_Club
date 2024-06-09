#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, x;
        cin >> n >> m >> x;
        vector<ll> v(m);
        vector<char> c(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v[i] >> c[i];
        }
        set<ll> s;
        s.insert(x);
        set<ll> ans;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == '0')
            {
                set<ll> tem;
                for (auto &&val : s)
                {
                    ll a = val + v[i];
                    if (a > n)
                        a -= n;
                    tem.insert(a);
                }
                s = tem;
            }
            else if (c[i] == '1')
            {
                set<ll> tem;
                for (auto &&val : s)
                {
                    ll a = val - v[i] + n;
                    if (a > n)
                        a -= n;
                    tem.insert(a);
                }
                s = tem;
            }
            else
            {
                set<ll> tem;
                for (auto &&val : s)
                {
                    ll a = val + v[i];
                    if (a > n)
                        a -= n;
                    tem.insert(a);

                    a = val - v[i] + n;
                    if (a > n)
                        a -= n;
                    tem.insert(a);
                }

                s = tem;
            }
        }
        cout << s.size() << endl;
        for (auto &&i : s)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}