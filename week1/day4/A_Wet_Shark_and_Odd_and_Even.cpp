#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
    {
        long long minodd = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                minodd = min(minodd, a[i]);
            }
        }
        cout << sum - minodd << endl;
    }

    return 0;
}