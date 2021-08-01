int kthLargestsubArray(vector<int> &arr, int k){
	int n = arr.size();
	vector<int> sum(n+1);
	sum[0] = 0;
	for(int i=1; i<=n;i++){
		sum[i] = sum[i-1] + arr[i-1];
	}
	priority_queue<int, vector<int>, greater<int>> heap;
	for(int i=0; i<sum.size(); i++){
		
		for(int j=i; j<sum.size(); j++){
			if(heap.size() < k){
				heap.push(sum[j] - sum[i-1]);
			}
			else{
				if(heap.top() < sum[j] - sum[i-1]){
					heap.pop();
					heap.push(sum[j] - sum[i-1]);
				}
			}
		}
		
	}
	
	return heap.top();
}

int main(){
	vector<int> arr = { 10, -10, 20, -40 };
	int k = 6;
	cout<< kthLargestsubArray(arr, k);
	return 0;
}
