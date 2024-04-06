#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e6 + 5;
vector<ll> adj[N];
ll leafs[N];
void dfs(ll node, ll par)
{
    bool haschild = false;
    for (auto child : adj[node])
    {
        if (child == par)
            continue;
        haschild = true;
        dfs(child, node);
        leafs[node] += leafs[child];
    }
    if (!haschild)
        leafs[node] = 1;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            adj[i].clear();
            leafs[i] = 0;
        }

        for (int i = 1; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            ll ans = leafs[x] * leafs[y];
            cout << ans << endl;
        }
    }

    return 0;
}