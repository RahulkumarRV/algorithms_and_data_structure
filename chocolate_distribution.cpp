long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        
        long long minc = INT_MAX;
        for(int i = m-1; i<n; i++){
            minc = min(a[i] - a[i - m + 1], minc);
        }
        return minc;
    }
