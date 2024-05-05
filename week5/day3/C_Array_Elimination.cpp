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
        vector<int> a(n), res(30);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < 30; i++)
        {
            for (int k = 0; k < n; k++)
            {
                if (a[k] & (1 << i))
                    res[i]++;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            bool ok = true;
            for (int j = 0; j < 30; j++)
            {
                if (res[j] % i != 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        for (auto &&i : ans)
        {
            cout << i << " ";
        }

        cout << endl;
    }
    return 0;
}