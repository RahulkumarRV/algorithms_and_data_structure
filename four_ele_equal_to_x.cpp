vector<vector<int> > fourSum(vector<int> &arr, int k) {
       sort(arr.begin(), arr.end());
       int n = arr.size();
       vector<vector<int>> res;
       for(int i=0; i<n-3; i++){
           for(int j=i+1; j<n-2; j++){
               int l = j+1;
               int r = n - 1;
               while(l < r){
                   if(arr[i] + arr[j] + arr[l] + arr[r] == k){
                       vector<int> values;
                       values.push_back(arr[i]);
                       values.push_back(arr[j]);
                       values.push_back(arr[l]);
                       values.push_back(arr[r]);
                       sort(values.begin(), values.end());
                       res.push_back(values);
                       l++;
                       r--;
                   }
                   else if(arr[i] + arr[j] + arr[l] + arr[r] < k){
                       l++;
                   }
                   else {
                       r--;
                   }
               }
           }
       }
       sort(res.begin(), res.end());
       res.erase(unique(res.begin(), res.end()), res.end());
       
       return res;
    }
