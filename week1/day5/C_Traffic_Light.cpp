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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        if (c == 'g')
            cout << 0 << endl;
        else
        {
            int maxsec = INT_MIN;
            for (int i = 0; i < s.size(); i++)
            {
                int cnt = 0;
                if (s[i] == c)
                {
                    while (i < s.size() && s[i] != 'g')
                    {
                        cnt++;
                        i++;
                    }
                    if (s[i] == 'g')
                        maxsec = max(maxsec, cnt);
                }
            }
            cout << maxsec << endl;
        }
    }

    return 0;
}