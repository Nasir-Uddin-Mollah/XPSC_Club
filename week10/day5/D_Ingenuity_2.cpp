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
        string S;
        cin >> S;
        int x = 0, y = 0;
        for (auto &&i : S)
        {
            if (i == 'N')
                y++;
            else if (i == 'S')
                y--;
            else if (i == 'E')
                x++;
            else
                x--;
        }
        if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
            cout << "NO\n";
        else if (n == 2 and x == 0 and y == 0)
            cout << "NO\n";
        else
        {
            int n = 0, s = 0, w = 1, e = 1;
            char m[2] = {'R', 'H'};
            string ans = "";
            for (auto c : S)
            {
                if (c == 'N')
                    ans += m[n], n = 1 - n;
                else if (c == 'S')
                    ans += m[s], s = 1 - s;
                else if (c == 'W')
                    ans += m[w], w = 1 - w;
                else
                    ans += m[e], e = 1 - e;
            }
            cout << ans << '\n';
        }
    }

    return 0;
}