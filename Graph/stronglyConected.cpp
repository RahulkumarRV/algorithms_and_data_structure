// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	
	void dfs1(int u, vector<int> adj[], vector<bool> &visited,
	stack<int> &st){
	    visited[u] = true;
	    for(int v : adj[u]){
	        if(visited[v] == false)dfs1(v, adj, visited, st);
	    }
	    st.push(u);
	}
	
	void revers(vector<int> adj[], vector<int> rev[], int V){
	    for(int i=0; i<V; i++){
	        for(int j : adj[i]){
	            rev[j].push_back(i);
	        }
	    }
	}
	
	void dfs2(int u, vector<int> adj[], vector<bool> &visited){
	    visited[u] = true;
	    for(int v : adj[u]){
	        if(visited[v] == false){
	            dfs2(v, adj, visited);
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
    
        stack<int> st;
        vector<bool> visited(V, false);
        for(int i=0; i<V; i++){
            if(visited[i] == false){
                dfs1(i, adj, visited, st);
            }
        }
        vector<int> rev[V];
        revers(adj, rev, V);
        int count = 0;
        for(int i=0; i<V; i++)
            visited[i] = false;
        while(!st.empty()){
            int cur = st.top();
            st.pop();
            if(visited[cur] == false){
                count++;
                dfs2(cur, rev, visited);
            }
        }
        return count;
    }
};

// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends
