long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr, arr + n);
	    int count = 0;
	    for(int i=0; i<n-2; i++){
	        int l , r ;
	        l = i + 1, r = n-1;
	        while(l < r){
	            if(arr[i] + arr[l] + arr[r] < sum){
	                
	                count += r - l;
	                
	                l++;
	            }
	            else{
	                r--;
	            }
	        }
	    }
	    return count;
	}
