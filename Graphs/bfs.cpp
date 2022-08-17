#include<bits/stdc++.h>
void makeAdjList(vector<pair<int,int>> edges, unordered_map<int, set<int>> &adj){
    for(int i = 0; i<edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
}

void bfs(unordered_map<int, set<int>> &adj,map<int, bool> &visited, vector<int> &ans, int node ){
    queue<int> q;
    q.push(node);
    
    visited[node] = 1;
    
    while(!q.empty()){
        int top = q.front();
        q.pop();
        ans.push_back(top);
        
        for(auto i: adj[top]){
            if(!visited[i]){
                q.push(i);
                visited[i]= 1;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int, set<int>> adj;
    vector<int> ans;
    map<int, bool> visited;
    
    makeAdjList(edges, adj);
    
    for(int i = 0; i<vertex; i++) {
        if(!visited[i]){
            bfs(adj, visited, ans, i);
        }
    }
    return ans;
}
