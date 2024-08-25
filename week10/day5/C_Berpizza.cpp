#include <bits/stdc++.h>
using namespace std;
bool vis[500009];
int main()
{
    int q, idx = 1, order = 1;
    cin >> q;
    priority_queue<pair<int, int>> pq;
    while (q--)
    {
        int m;
        cin >> m;
        if (m == 1)
        {
            int x;
            cin >> x;
            pq.push({x, -idx});
            idx++;
        }
        else if (m == 2)
        {
            while (vis[order])
                order++;
            cout << order << " ";
            vis[order] = true;
        }
        else
        {
            while (vis[-pq.top().second])
                pq.pop();
            int x = -pq.top().second;
            cout << x << " ";
            vis[x] = true;
            pq.pop();
        }
    }

    return 0;
}