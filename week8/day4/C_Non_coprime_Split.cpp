#include <bits/stdc++.h>
using namespace std;
int div(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (r > l)
        {
            if (r % 2 == 0)
            {
                cout << r / 2 << " " << r / 2 << endl;
                continue;
            }
            else
            {
                r--;
                cout << r / 2 << " " << r / 2 << endl;
                continue;
            }
        }
        int divofl = div(l);
        if (divofl == l)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << divofl << " " << l - divofl << endl;
            continue;
        }
    }

    return 0;
}