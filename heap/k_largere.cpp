vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int> heap;
	    
	    for(int i=0; i<n; i++){
	        heap.push(arr[i]);
	    }
	    vector<int> res;
	    for(int i=0; i<k; i++){
	        res.push_back(heap.top());
	        heap.pop();
	    }
	    return res;
	}
