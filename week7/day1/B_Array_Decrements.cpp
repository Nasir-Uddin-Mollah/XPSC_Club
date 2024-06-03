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
        bool flag = false;
        int dif = -1, zdif = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                flag = true;
                break;
            }
            if (b[i] > 0)
            {
                if (dif == -1)
                    dif = a[i] - b[i];
                else if (a[i] - b[i] != dif)
                {
                    flag = true;
                    break;
                }
            }
            else
                zdif = max(zdif, a[i] - b[i]);
        }

        if (flag)
            cout << "NO\n";
        else if (dif == -1 || zdif <= dif)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}