bool find3Numbers(int A[], int n, int x)
    {
        sort(A, A + n);
        for(int i=0; i<n-2; i++){
            
            int l = i + 1, r = n - 1;
            
            while(l < r){
                if(x == A[i] + A[l] + A[r]){
                    return 1;
                }
                else if(A[l] + A[r] + A[i] < x){
                    l++;
                }else {
                    r--;
                }
            }
            
        }
        return 0;
    }
