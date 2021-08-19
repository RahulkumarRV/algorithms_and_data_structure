class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int indegree[V] = {0};
	    for(int i=0; i<V; i++){
	        for(int j : adj[i]){
	            indegree[j]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0; i<V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    vector<int> res;
	    while(!q.empty()){
	        int d = q.front(); q.pop();
	        res.push_back(d);
	        for(int j : adj[d]){
	            indegree[j]--;
	            if(indegree[j] == 0){
	                q.push(j);
	            }
	        }
	    }
	    return res;
	    
	}
};
