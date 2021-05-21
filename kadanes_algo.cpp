int maxSubarraySum(int a[], int n){
    int m = INT_MIN, sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(m < sum){
            m = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return m;
}

// another way 
int maxSubarraySum(int a[], int n){
    int m = INT_MIN, sum = 0;
	
	for(int i=0; i<n; i++){
		if(a[i] <= sum + a[i]){
			sum += a[i];
		}
		else {
			sum = a[i];
		}
		if(m < sum){
			m = sum;
		}
	}
	return m;
}
