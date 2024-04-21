#include <bits/stdc++.h>
using namespace std;

vector<int> dfsOfGraph(int V, vector<int> adj[])
{

    int vis[V];
    for (int i = 0; i < V; i++)
    {
        vis[i] = 0;
    }
    vector<int> dfs;
    int vis[V];
    for (int i = 0; i < V; i++)
    {
        vis[i] = 0;
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int> &ans){
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main(){
    vector<int> adj[6];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    vector<int> ans = dfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}