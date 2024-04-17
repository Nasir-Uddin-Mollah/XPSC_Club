#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n), b(n);
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }
        for (int i = 0; i < n; i++)
        {
            b[i] = (v[i] ^ x);
        }
        for (int i = 0; i < n; i++)
        {
            y ^= b[i];
        }
        if (y == 0)
            cout << x << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}