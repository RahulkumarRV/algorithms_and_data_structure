class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<bool> visited(V, false);
	    queue<int> q;
	    q.push(0);
	    visited[0] = true;
	    vector<int> res;
	    res.push_back(0);
	    while(!q.empty()){
	        int node = q.front(); q.pop();
	        for(int t : adj[node]){
	            if(!visited[t]){
	                visited[t] = true;
	                q.push(t);
	                res.push_back(t);
	            }
	        }
	    }
	    return res;
	}
};
