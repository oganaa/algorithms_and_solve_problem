class Solution {

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList(n);
        vector<bool> seen(n,false);
        int u,v,curV,secV;
        queue<int> q;
        for(int i = 0;i<edges.size();i++){
            u = edges[i][0];
            v = edges[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        q.push(source);
        seen[source] = true;
        while(!q.empty()){
            curV = q.front();
            for(int i = 0;i<adjList[curV].size();i++){
                secV=adjList[curV][i];
                if(!seen[secV]){
                    q.push(secV);
                    seen[secV]=true;        
                }
            }
            q.pop();
        }
        if(seen[destination]) return true;
        else return false;
    }
};