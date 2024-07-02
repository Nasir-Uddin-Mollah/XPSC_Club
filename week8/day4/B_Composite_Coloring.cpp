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
        vector<int> v(n), ans(n);
        for (auto &&i : v)
        {
            cin >> i;
        }
        for (auto &&i : ans)
        {
            i = -1;
        }
        vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        int cur = 1;
        for (auto &&p : prime)
        {
            bool ok = false;
            for (int i = 0; i < n; i++)
            {
                if (ans[i] == -1 and v[i] % p == 0)
                {
                    ans[i] = cur;
                    ok = true;
                }
            }
            if (ok)
                cur++;
        }
        cout << cur - 1 << endl;
        for (auto &&i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}