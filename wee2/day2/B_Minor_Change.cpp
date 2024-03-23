#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int operations = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            operations++;
    }
    cout << operations << endl;
    return 0;
}