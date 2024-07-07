#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (auto &&i : s)
    {
        mp[i]++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (mp[i + 'A'] % 2 != 0)
            cnt++;
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        int l = 0, r = n - 1;
        string ans(n, ' ');
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] % 2 == 1)
            {
                ans[n / 2] = s[i];
                mp[s[i]]--;
            }
            while (mp[s[i]] > 0)
            {
                ans[l] = s[i];
                ans[r] = s[i];
                l++;
                r--;
                mp[s[i]] -= 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}