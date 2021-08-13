class Solution
{
    public:
	
	bool dfs(vector<int> adj[], vector<bool> &visited, int cur, vector<bool> &recS){
	    recS[cur] = true;
	    if(!visited[cur]){
	        visited[cur] = true;
	        for(auto i : adj[cur]){
	            if(!visited[i] and dfs(adj, visited, i, recS)){
	                return true;
	            }
	            if(recS[i]){
	                return true;
	            }
	        }
	    }
	    recS[cur] = false;
	    return false;
	}
	
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	vector<bool> visited(V, false);
	   	vector<bool> recstack(V, false);
	   	for(int i=0; i<V; i++){
	   	    
	   	    if(!visited[i] and dfs(adj, visited, i, recstack)){
	   	        return true;
	   	    }
	   	}
	   	return false;
	}
};
