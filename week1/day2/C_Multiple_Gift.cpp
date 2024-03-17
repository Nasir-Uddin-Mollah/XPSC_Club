#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    long long cnt = 1;
    while (x * 2 <= y)
    {
        x *= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}