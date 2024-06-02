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
        int cnt1 = count(s.begin(), s.end(), '1');
        int cnt0 = count(s.begin(), s.end(), '0');
        if (min(cnt1, cnt0) % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}