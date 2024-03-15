#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    void InOutDegree(vector<vector<int>> &adj, int n)
    {
        vector<int> In;
        vector<int> Out;

        for (int i = 0; i < n; i++)
        {
            Out[i] = adj[i].size();
            for (int j = 0; j < adj[i].size(); j++)
            {
                In[adj[i][j]]++;
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << k << endl;
            cout << In[k] << endl;
            cout << Out[k] << endl;
        }
    }
    void edge(vector<vector<int>> &adj, int u, int v, bool direction)
    {
        adj[u].push_back(v);
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printadj(vector<vector<int>> &adj)
    {
        for (auto i : adj[i][0])
        {
            cout << adj[i][0] << "->";
            for (auto j : adj[i][1])
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    graph g;
    vector<vector<int>> adj;
    int n = adj.size();
    g.edge(adj, 1, 2, 1);

    g.printadj(adj);

    g.InOutDegree(adj, n);
}