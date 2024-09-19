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
        string s;
        cin >> s;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '1')
                v[i] = 2;
        }
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (v[j] == 0)
                {
                    ans += i;
                    v[j] = 1;
                }
                else if (v[j] == 2)
                    break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}