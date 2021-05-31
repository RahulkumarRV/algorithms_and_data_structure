int trappingWater(int arr[], int n){
        int res = 0;
        
        for(int i=1; i<n-1; i++){
            int left = arr[i];
            for(int j=0; j<i; j++){
                if(arr[j] > left){
                    left = arr[j];
                }
            }
            int right = arr[i];
            
            for(int j=i+1; j<n; j++){
                if(arr[j] > right){
                    right = arr[j];
                }
            }
            res = res + (min(left, right) - arr[i]);
            
                
        }
        return res;
    }

// anther way to solve in o(n)

int trappingWater(int arr[], int n){
        int res = 0;
        int left[n] = {0};
        int right[n]={0};
        left[0] = arr[0], right[n-1] = arr[n-1];
        
        for(int i=1; i<n; i++){
            left[i] = max(arr[i], left[i-1]);
        }
        
        for(int i=n-2; i>= 0; i--){
            right[i] = max(right[i+1], arr[i]);
        }
        
        for(int i=1; i<n-1; i++){
            res = res + (min(left[i], right[i]) - arr[i]);
            
                
        }
        return res;
    }
