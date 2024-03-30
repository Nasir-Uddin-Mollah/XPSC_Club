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
        for (auto &&c : s)
        {
            if (c >= 'A' && c <= 'Z')
                c += 32;
        }
        s.erase(unique(s.begin(), s.end()), s.end());

        if (s == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}