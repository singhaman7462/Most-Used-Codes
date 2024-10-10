void bfsSolve(vector<int> adj[] , vector<int>& ans , unordered_map<int,bool>&visited, int node){
        
        queue<int> q;
        
        q.push(node);
        visited[node]= true;
       
        while(!q.empty()){
            
            int frontNode = q.front();
            q.pop();
            
            ans.push_back(frontNode);
            
            
            for(int i=0;i<adj[frontNode].size();i++){
                
            
            if(!visited[adj[frontNode][i]]){
                
                q.push(adj[frontNode][i]);
                visited[adj[frontNode][i]]=true;
              }
         
            }   
        }
}