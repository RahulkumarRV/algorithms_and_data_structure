long long getMaxArea(long long arr[], int n){
	vector<int> left(n), right(n);
	stack<long long> st;
	for(int i=0; i<n; i++){
		if(st.empty()){
			left[i] = 0; st.push(i);
		}
		else{
			while(!st.empty() and arr[st.top()] >= arr[i]){
				st.pop();
			}
			left[i] = st.empty() ? 0 : st.top() + 1;
			st.push(i);
		}
	}
	while(!st.empty()){
		st.pop();
	}
	for(int i=n-1; i>=0; i--){
		if(st.empty()){
			right[i] = n-1; st.push(i);
		}
		else{
			while(!st.empty() and arr[st.top()] >= arr[i]){
				st.pop();
			}
			right[i] = st.empty() ? n-1 : st.top() - 1;
			st.push(i);
		}
	}
	long long maxArea = 0;
	for(int i=0; i<n; i++){
		maxArea = max(maxArea, arr[i] * (right[i] - left[i] + 1));
	}
	return maxArea;
}
