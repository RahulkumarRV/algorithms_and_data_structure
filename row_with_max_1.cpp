int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int i = 0;
	    int j = m - 1;
	    while(i < n && j >= 0){
	        if(arr[i][j]){
	            j--;
	        }
	        else{
	            int k = i;
	            while(k < n && !arr[k][j]){
	                k++;
	            }
	            if(k == n){
	                break;
	            }
	            i = k;
	        }
	    }
	    
	    return (i == 0 && j == m - 1) ? -1 : i;
	}
