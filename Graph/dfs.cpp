class Solution 
{
    public:
    
    void dfs(int src, vector<int> adj[], vector<bool> &visited, vector<int> &res){
        visited[src] = true;
        res.push_back(src);
        
        for(int t : adj[src]){
            if(!visited[t]){
                dfs(t, adj, visited, res);
            }
        }
    }
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<bool> visited(V, false);
	    vector<int> res;
	    dfs(0, adj, visited, res);
	    return res;
	}
};
