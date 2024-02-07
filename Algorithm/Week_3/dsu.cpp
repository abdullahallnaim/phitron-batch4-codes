#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N];
int size[N];

void make(int v)
{
    parent[v] = v; // v ke nijer parent baniye dilo
    size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

void Union(int a, int b)
{
    if (find(a) != find(b))
    {
        if (size[a] < size[b])
        {
            swap(a, b);
        }
        parent[b] = a;      // choto size er tree ke boro size er tree te assign korlam
        size[a] += size[b]; // boro er size er tree er value increase kore fellam.
    }
}

int main()
{
    // component count korbo;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        make(i);
    }

    while(m--){
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if(i == find(i)){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
