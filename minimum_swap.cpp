int minSwap(int *arr, int n, int k) {
    int count = 0, diff = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] <= k){
            count++;
        }
    }
    for(int i=0; i<count; i++){
        if(arr[i] > k){
            diff++;
        }
    }
    int res = diff;
    for(int i=0, j=count; j<n; i++, j++){
        if(arr[i] > k) diff--;
        if(arr[j] > k) diff++;
        res = min(res, diff);
    }
    return res;
}
