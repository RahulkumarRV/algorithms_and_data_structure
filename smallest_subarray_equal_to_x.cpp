int sb(int arr[], int n, int x)
    {
        int cur_sum = 0, min_len = n + 1;
        int start = 0, end = 0;
        while(end < n){
            
            while(cur_sum <= x && end < n){
                cur_sum += arr[end++];
            }
            
            while(cur_sum > x && start < n){
                if(end - start < min_len){
                    min_len = end - start;
                }
                cur_sum -= arr[start++];
            }
        }
        return min_len;
    }
