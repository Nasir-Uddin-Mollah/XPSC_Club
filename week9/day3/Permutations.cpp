#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 2 or n == 3)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for (int i = n - 1; i >= 1; i -= 2)
    {
        cout << i << " ";
    }
    for (int i = n; i >= 1; i -= 2)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}