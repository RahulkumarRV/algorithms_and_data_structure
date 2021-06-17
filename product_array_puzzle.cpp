vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int> left(n, 1), right(n, 1), res(n);
       
       for(int i=1; i<n; i++){
           left[i] *= nums[i - 1] * left[i - 1];
       }
       
       for(int i=n-2; i>=0; i--){
           right[i] = right[i+1] * nums[i+1];
       }
       res[0] = right[0];
       res[n-1] = left[n-1];
       for(int i=1 ;i<n-1; i++){
           res[i] = left[i] * right[i];
       }
       return res;
       
    }
