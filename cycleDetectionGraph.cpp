// Using DFS

bool dfs(int src,int p,int vis[],vector<int> adj[]){
        vis[src]=1;
        for(auto adjn:adj[src]){
            if(!vis[adjn]){
                bool detect=dfs(adjn,src,vis,adj);
                if(detect)
                return true;
            }
            else if(adjn!=p)
            return true;
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                 if(dfs(i,-1,vis,adj))
                 return true;
            }
        }
        return false;
    }



//Using BFS

bool detect(int vis[],int src,vector<int> adj[]){
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src]=1;
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto adjn:adj[node]){
                if(!vis[adjn]){
                    vis[adjn]=1;
                    q.push({adjn,node});
                }
                else if(parent!=adjn)
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(vis,i,adj))
                return true;
            }
        }
        return false;
    }