 int search(vector<int>& arr, int target) {
        return find(arr, 0, arr.size() - 1, target);
    }
    int find(vector<int>& arr, int l , int r, int key){
        if(l > r) return -1;
        int mid = (r + l)/2;
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[l] <= arr[mid]){
            if(key >=arr[l] && key <= arr[mid]){
                return find(arr, l, mid - 1, key);
            }
            else return find(arr, mid + 1, r, key);
        }
        else
            if(key >= arr[mid] && key <= arr[r])
                return find(arr, mid + 1, r, key);
            
        
        return find(arr, l , mid - 1, key);
        
        
    }
//O(log(n))
