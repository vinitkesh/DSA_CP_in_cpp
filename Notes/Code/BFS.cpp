#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void BFS(vector<vector<int>> &graph, int src, bool visited[])
    {
        queue<int> Q;

        Q.push(0);
        visited[0] = 1;

        while (Q.empty())
        {
            int x = Q.front();
            Q.pop();

            for (int i = 0; i < graph[x].size(); i++)
            {
                if (i == x)
                {
                    continue;
                }
                else if (visited[i] == false)
                {
                    Q.push(i);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>> &isConnected)
    {

        bool visited[isConnected[0].size()];

        for (int i; i < isConnected[0].size(); i++)
        {
            visited[i] == false;
        }

        int count = 0;

        for (int i = 0; i < isConnected[0].size(); i++)
        {
            if (visited[i] == false)
            {
                BFS()   ;
                count++;
            }
        }

        return count;
    }
};

vector<int> bfsOfGraph(int V, vector<int> adj[])
{

    // Step1: Create a visited array and initialize all the elements with 0
    // Step2: Create a queue and push the starting node in the queue
    //          and Mark the starting node as visited
    // Step3: Iterate till the queue is empty
    //      Get the topmost element in the queue and pop it
    //      Traverse for all its neighbours
    //          If the neighbour has previously not been visited,
    //          store in Q and mark as visited
    // Step4: Return the bfs vector

    int vis[V];
    for (int i = 0; i < V; i++)
    {
        vis[i] = 0;
    }

    queue<int> q;
    // push the initial starting node
    q.push(0);
    vis[0] = 1;

    vector<int> bfs;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> adj[6];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 4);

    vector<int> ans = bfsOfGraph(5, adj);
    printAns(ans);

    return 0;
}