#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= 1000; i++)
    {
        if (c * i >= a && c * i <= b)
        {
            cout << c * i << endl;
            break;
        }
        else if (c * i > b)
        {
            cout << -1 << endl;
            break;
        }
    }

    return 0;
}