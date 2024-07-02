#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    return __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> c(1001);
        for (int i = 1; i <= 1000; i++)
        {
            c[i] = -1;
        }

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            c[x] = i;
        }

        int ans = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (c[i] != -1 && c[j] != -1)
                {
                    if (gcd(i, j) == 1)
                    {
                        ans = max(ans, c[i] + c[j]);
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}