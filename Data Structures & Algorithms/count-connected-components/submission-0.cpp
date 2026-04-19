class Solution {
public:
  void bfs(vector<vector<int>> & adj,vector<bool>&visited,int src){
    queue<int>q;
    visited[src]=true;
    q.push(src);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto next:adj[cur]){
            if(visited[next]) continue;
            q.push(next);
            visited[next]=true;
        }

    }

  }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
            
        }
            vector<bool>visited(n,false);
            int ans=0;
            for(int i=0;i<n;i++){
                if(!visited[i]){
                    ans++;
                    bfs(adj,visited,i);
                }
            }
            return ans; 
    }
};
