#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<int> adj[N];
bool vis[N];

int cnt = 0;
void dfs(int src){
    cnt++; // src er jonneo cnt++ hocche
    vis[src] = true;
    for(int child : adj[src]){
        if(vis[child]) continue;
        dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    int k;
    cin >> k;
    dfs(k);
    cout << cnt - 1 << endl;
    return 0;
}
