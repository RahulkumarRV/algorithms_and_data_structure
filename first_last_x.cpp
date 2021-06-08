vector<int> find(int arr[], int n , int x )
{
    
    int f = -1, l = -1;
    vector<int> res;
    for(int i=0; i<n; i++){
        if(arr[i] == x && f == -1){
            f = i;
            l = i;
        }
        else if(arr[i] == x){
            l = i;
        }
    
    }
    res.push_back(f);
    res.push_back(l);
    return res;
}
//O(n)

vector<int> find(int arr[], int n , int x )
{
    vector<int> res;
    
    int l , r,v;
    l = 0, r = n - 1, v = -1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(arr[mid] > x){
            r = mid -1;
        }
        else if(arr[mid] < x){
            l = mid + 1;
        }
        else{
            v = mid;
            r = mid - 1;
        }
    }
    res.push_back(v);
    
    l = 0, r = n -1, v = -1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(arr[mid] > x){
            r = mid -1;
        }
        else if(arr[mid] < x){
            l = mid + 1;
        }
        else{
            v = mid;
            l = mid + 1;
        }
    }
    res.push_back(v);
    return res;
}

//O(log(n))
