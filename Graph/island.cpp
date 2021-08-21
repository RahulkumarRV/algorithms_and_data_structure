class Solution
{
    public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        if(i >= 0 and i < grid.size() and j >= 0
            and j < grid[0].size() and grid[i][j] == '1'){
            grid[i][j] = '0';
            
            dfs(grid, i - 1, j);
            dfs(grid, i - 1, j + 1);
            dfs(grid, i, j + 1);
            dfs(grid, i + 1, j + 1);
            dfs(grid, i + 1, j);
            dfs(grid, i + 1, j - 1);
            dfs(grid, i, j - 1);
            dfs(grid, i - 1, j - 1);
            
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int lc = 0;
        int r = grid.size(), c = grid[0].size();
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    lc++;
                }
            }
        }
        return lc;
    }
};
