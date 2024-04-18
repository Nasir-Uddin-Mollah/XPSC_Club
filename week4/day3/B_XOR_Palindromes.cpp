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
        int samepair = 0, notsamepair = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == s[n - i - 1])
                samepair += 2;
            else
                notsamepair++;
        }
        string ans;
        for (int i = 0; i <= n; i++)
        {
            int total1 = i;
            total1 -= notsamepair;
            if (total1 < 0)
                ans += '0';
            else
            {
                total1 = max((total1 % 2), total1 - samepair);
                total1 = max(0, total1 - (n % 2));
                if (total1)
                    ans += '0';
                else
                    ans += '1';
            }
        }
        cout << ans << endl;
    }

    return 0;
}