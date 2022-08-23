#include<bits/stdc++.h>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    unordered_map<int, list<pair<int, int>>> adj;
    for(int i = 0; i<edges; i++) {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];
        
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back({u,w});
    }
    
    vector<int> distance(vertices);
    for(int i =0;i<vertices; i++) {
        distance[i] = INT_MAX;
    }
    
    set<pair<int,int>> st;
    
    st.insert({0,source});
    distance[source] = 0;
    
    while(!st.empty()){
        auto top = *(st.begin());
        int nodeDistance = top.first;
        int frontNode = top.second;
        
        st.erase(st.begin());
        
        for(auto neighbour: adj[frontNode]){           
            if(neighbour.second + nodeDistance  < distance[neighbour.first]){
                auto record = st.find(make_pair(distance[neighbour.first], neighbour.first));

                if(record != st.end()){
                    st.erase(record);
                }
                distance[neighbour.first] = neighbour.second + nodeDistance;
                
                st.insert({distance[neighbour.first], neighbour.first});
            }
        }
    }
    return distance;
    
}





