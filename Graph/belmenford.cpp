class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    
	    int w[n] = {INT_MAX};
	    w[0] = 0;
	    for(int i=0; i<n-1; i++){
	        
	        for(int j=0; j<edges.size(); j++){
	            
	            if(w[edges[j][0]] + edges[j][2] < w[edges[j][1]]){
	                w[edges[j][1]] = w[edges[j][0]] + edges[j][2];
	            }
	        }
	    }
	    int flag = 0;
	    for(int j=0; j<edges.size(); j++){
	            
            if(w[edges[j][0]] + edges[j][2] < w[edges[j][1]]){
                return true;
            }
        }
        return false;
	}
};
