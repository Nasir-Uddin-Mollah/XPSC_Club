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
        int x = 1, y = 0, cnt = 0;
        while (x * 2 <= n)
        {
            x *= 2;
            cnt++;
        }
        for (int i = cnt - 1; i >= 0; i--)
        {
            if ((1 << i) & n)
            {
                y |= (1 << i);
            }
        }
        cout << y << " " << x << "\n";
    }

    return 0;
}