bool findPair(int arr[], int size, int n){
    //code
    if(size <= 1) {
        return false;
    }
    sort(arr, arr + size);
    int l = 0, r = 1;
    while(l < size &&  r < size){
        if(abs(arr[r] - arr[l]) == n){
            return true;
        }
        else if(abs(arr[r] - arr[l]) < n){
            r++;
        }
        else{
            l++;
        }
    }
    return false;
}
