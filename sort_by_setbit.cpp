int countsetbit(int a){
        int count = 0;
        while(a){
            count += a & 1;
            a >>= 1;
        }
        return count;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        vector<vector<int>> count(32);
        for(int i=0; i<n; i++){
            int setbits = countsetbit(arr[i]);
            count[setbits].push_back(arr[i]);
        }
        
        int j = 0;
        for(int i=31; i>=0; i--){
            
            for(int k=0; k<count[i].size(); k++){
                
                arr[j++] = count[i][k];
            }
        }
    }
