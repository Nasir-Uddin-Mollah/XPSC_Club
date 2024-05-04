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
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
            {
                int x = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans += (char(x + 96));
                i += 2;
            }
            else
            {
                int x = (s[i] - '0');
                ans += (char(x + 96));
            }
        }
        cout << ans << endl;
    }

    return 0;
}