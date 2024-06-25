#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x, y;
    cin >> x >> y;
    if (x == 1 and y != 1)
        cout << "<" << endl;
    else if (x != 1 and y == 1)
        cout << ">" << endl;
    else if ((x == 2 and y == 4) or (x == 4 and y == 2))
        cout << "=" << endl;
    else if (x == 3 and y == 2)
        cout << ">" << endl;
    else if (x == 2 and y == 3)
        cout << "<" << endl;
    else if (x > y)
        cout << "<" << endl;
    else if (x < y)
        cout << ">" << endl;
    else
        cout << "=" << endl;
    return 0;
}