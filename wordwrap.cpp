int solveWordWrap(vector<int>nums, int k) 
    { 
        int inf = INT_MAX;
        int n = nums.size();
        int es[n + 1][n+1];
        int lc[n+1][n+1];
        int c[n+1];
        for(int i=1; i<=n; i++){
            es[i][i] = k - nums[i-1];
            
            for(int j=i+1; j<=n; j++){
                
                es[i][j] = es[i][j - 1] - nums[j-1] - 1;
                
            }
        }
        
        for(int i=1; i<=n; i++){
            
            for(int j=i; j<=n; j++){
                if(es[i][j]<0){
                    lc[i][j] = inf;
                }
                else if(j == n && es[i][j] >=0){
                    lc[i][j] = 0;
                }
                else{
                    lc[i][j] = es[i][j] * es[i][j];
                }
            }
        }
        
        
        c[0] = 0;
        for(int i=1; i<=n; i++){
            c[i] = inf;
            for(int j=1; j<=i; j++){
                if(c[j-1] != inf and lc[j][i] != inf and 
                    c[j-1] + lc[j][i] < c[i]){
                    
                    c[i] = c[j-1] + lc[j][i];
                    
                }
            }
        }
        
      
        return c[n];
    } 
