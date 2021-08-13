class Solution 
{
    public:
    bool bfs(int cur, vector<int> adj[], vector<bool> &visited){
        queue<int> q;
        q.push(cur);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(visited[node]){
                return true;
            }
            visited[node] = true;
            for(auto i : adj[node]){
                if(!visited[i]){
                    q.push(i);
                }
            }
        }
        return false;
    }
    //Function to detect cycle in an undirected graph.
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool> visited(V, false);
	    for(int i=0; i<V; i++){
	        if(!visited[i] and bfs(i, adj, visited)){
	            return true;
	        }
	    }
	    return false;
	}
};
