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
        map<char, int> mp;
        for (auto &&i : s)
        {
            mp[i]++;
        }
        bool flag = true;
        for (auto &&i : mp)
        {
            if (mp.size() == 1)
            {
                flag = false;
                break;
            }
            else if (mp.size() == 2)
            {
                if (i.second == 1)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";

        // string s2;
        // if (s.size() % 2 == 1)
        // {
        //     s.erase(s.begin() + s.size() / 2);
        // }
        // s2 = string(s.size(), s[0]);
        // if (s != s2)
        //     cout << "YES\n";
        // else
        //     cout << "NO\n";
    }

    return 0;
}