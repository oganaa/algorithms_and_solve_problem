class Solution {

public:
   bool dfs(vector<vector<int>>& graph, vector<int>& visited, int current, int end) {
        if(current == end)
            return true;
        if(visited[current])
            return false;
        
        visited[current] = 1;
        
        for(int i=0; i<graph[current].size(); i++){
            if(dfs(graph, visited, graph[current][i], end))
                return true;
        }
        
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        int u,v;
        for(int i = 0;i<edges.size();i++){
            u = edges[i][0];
            v = edges[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<int> visited(n, 0);
        return dfs(adjList, visited, source, destination);
     
    }
};