#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};
    for (auto c : s)
    {
        cnt[c - 'a']++;
    }
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
        {
            cout << char(i + 'a') << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "None" << endl;

    return 0;
}