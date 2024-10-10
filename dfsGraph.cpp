void dfs(vector<int> adj[],int vis[],int start, vector<int> &ans){
        vis[start]=1;
        ans.push_back(start);
        for(auto it:adj[start]){
            if(!vis[it])
            dfs(adj,vis,it,ans);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        int vis[V]={0};
        int start=0;
        dfs(adj,vis,start,ans);
        return ans;
        
    }