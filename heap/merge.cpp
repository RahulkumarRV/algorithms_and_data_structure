void swap(vector<int> &arr, int a, int b){
    	int temp = arr[a];
    	arr[a] = arr[b];
    	arr[b] = temp;
    }
    void MaxHeapify(vector<int> &arr, int index){
    	int largest = index;;
    	int left = index*2 + 1, right = index * 2 + 2;
    	if(left < arr.size() and arr[left] > arr[largest]){
    		largest =  left;
    	}
    	if(right < arr.size() and arr[right] > arr[largest]){
    		largest = right;
    	}
    	if(largest != index){
    		swap(arr, index, largest);
    		MaxHeapify(arr, largest);
    	}
    }
    void createMaxHeap(vector<int> &arr){
    	int n = arr.size();
    	for(int i=n/2 - 1; i>=0; i--){
    		MaxHeapify(arr, i);
    	}
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> arr;
        for(int i=0; i<a.size(); i++){
            arr.push_back(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            arr.push_back(b[i]);
        }
        createMaxHeap(arr);
        return arr;
    }
