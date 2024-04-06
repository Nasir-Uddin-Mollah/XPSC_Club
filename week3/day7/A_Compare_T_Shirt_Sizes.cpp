#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        if (s1 == s2)
            cout << "=" << endl;
        else if (s1[n - 1] == 'S' && s2[m - 1] != 'S')
            cout << "<" << endl;
        else if (s1[n - 1] != 'S' && s2[m - 1] == 'S')
            cout << ">" << endl;
        else if (s1[n - 1] == 'L' && s2[m - 1] != 'L')
            cout << ">" << endl;
        else if (s1[n - 1] != 'L' && s2[m - 1] == 'L')
            cout << "<" << endl;
        else if (s1[n - 1] == 'M')
        {
            if (s2[m - 1] == 'S')
                cout << ">" << endl;
            else if (s2[m - 1] == 'L')
                cout << "<" << endl;
        }
        else if (s2[m - 1] == 'M')
        {
            if (s1[n - 1] == 'S')
                cout << "<" << endl;
            else if (s1[n - 1] == 'L')
                cout << ">" << endl;
        }
        else if (s1[n - 1] == s2[m - 1])
        {
            if (s1[n - 1] == 'S')
            {
                if (n < m)
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
            else if (s1[n - 1] == 'L')
            {
                if (n > m)
                    cout << ">" << endl;
                else
                    cout << "<" << endl;
            }
        }
    }

    return 0;
}