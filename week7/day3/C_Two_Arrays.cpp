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
        vector<int> a(n), b(n);
        for (auto &&i : a)
        {
            cin >> i;
        }
        for (auto &&i : b)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] - a[i] > 1 || b[i] - a[i] < 0)
            {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}