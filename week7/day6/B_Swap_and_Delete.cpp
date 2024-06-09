#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int z = count(s.begin(), s.end(), '0');
        int o = count(s.begin(), s.end(), '1');
        for (auto &&i : s)
        {
            if (i == '0')
            {
                if (o > 0)
                    o--;
                else
                    break;
            }
            if (i == '1')
            {
                if (z > 0)
                    z--;
                else
                    break;
            }
        }
        cout << o + z << endl;
    }

    return 0;
}