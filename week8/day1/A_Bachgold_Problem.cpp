#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        int x = (n - 3) / 2;
        cout << x + 1 << endl;
        for (int i = 0; i < x; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    return 0;
}