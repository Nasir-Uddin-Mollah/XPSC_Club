#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    if (n >= 1000)
        cout << n << endl;
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int mod = n % 10;
            s += char('0' + mod);
            n = n / 10;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}