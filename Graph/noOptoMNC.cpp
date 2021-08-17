class Solution {
    vector<int> adj[100007];
    void dfs(int src,vector<int> & vis)
    {
        vis[src]=1;
        for(auto i:adj[src])
        {
            if(!vis[i])dfs(i,vis);
        }
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)return -1;
        int cnt = 0;
        vector<int> vis(n,0);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i,vis);
            }
        }
        return cnt-1;
    }
};
