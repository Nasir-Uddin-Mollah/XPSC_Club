#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int totalcoins = 0;
    if (a > b)
    {
        totalcoins += a;
        a--;
        if (a > b)
        {
            totalcoins += a;
            a--;
        }
        else
        {
            totalcoins += b;
            b--;
        }
    }
    else if (a < b)
    {
        totalcoins += b;
        b--;
        if (a > b)
        {
            totalcoins += a;
            a--;
        }
        else
        {
            totalcoins += b;
            b--;
        }
    }
    else
    {
        totalcoins += a;
        totalcoins += b;
        a--;
        b--;
    }
    cout << totalcoins << endl;
    return 0;
}