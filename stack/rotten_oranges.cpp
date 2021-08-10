class Solution 
{
    public:
    int R, C;
    bool issafe(int i, int j)
    {
        if (i >= 0 && i < R && j >= 0 && j < C)
            return true;
        return false;
    }
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int, int>> q;
        R = grid.size();
        C = grid[0].size();
        int count = 0;
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                if(grid[i][j] == 1){
                    count++;
                }
            }
        }
        
        int step = 0;
        while(!q.empty()){
            int n = q.size();
            
            for(int i=0; i<n; i++){
                int f = q.front().first;
                int s = q.front().second; q.pop();
                if(issafe(f-1, s) and grid[f-1][s] == 1){
                    count--;
                    grid[f-1][s] = 2;
                    q.push({f-1, s});
                }
                if(issafe(f, s-1) and grid[f][s-1] == 1){
                    count--;
                    grid[f][s-1] = 2;
                    q.push({f, s-1});
                }
                if(issafe(f+1, s) and grid[f+1][s] == 1){
                    count--;
                    grid[f+1][s] = 2;
                    q.push({f+1, s});
                }
                if(issafe(f, s+1) and grid[f][s+1] == 1){
                    count--;
                    grid[f][s+1] = 2;
                    q.push({f, s+1});
                }
            }
            if(!q.empty())
            step++;
        }
        
        if(count != 0){
            return -1;
        }
        return step;
    }
};
