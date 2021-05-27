long long maxProduct(int *arr, int n) {
	    long long minvalue , maxvalue, maxproduct;
	    minvalue = maxvalue = maxproduct = arr[0];
	    
	    for(int i=1; i<n; i++){
	        if(arr[i] < 0){
	            swap(minvalue, maxvalue);
	           
	        }
	        maxvalue = max(maxvalue * arr[i], (long long)arr[i]);
	        minvalue = min(minvalue * arr[i], (long long)arr[i]);
	        maxproduct = max(maxproduct, maxvalue);
	        cout<<maxvalue<<" "<<minvalue<<" "<<maxproduct<<endl;
	    }
	    return maxproduct;
	}
