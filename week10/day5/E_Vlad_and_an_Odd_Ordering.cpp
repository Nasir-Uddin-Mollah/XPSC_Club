#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n >> k;
        ll cnt = 2;
        if (k <= (n + 1) / 2)
        {
            cout << (k - 1) * 2 + 1;
            n = 0;
        }
        else
        {
            k = k - ((n + 1) / 2);
            n = n - ((n + 1) / 2);
        }
        while (n != 0)
        {
            ll tmp = (n + 1) / 2;
            if (k == 1 && n == 1)
            {
                cout << cnt;
                break;
            }
            if (k <= tmp)
            {
                cout << (k - 1) * cnt * 2 + cnt;
                break;
            }
            cnt *= 2;
            k = k - tmp;
            n = n - tmp;
        }
        cout << endl;
    }

    return 0;
}