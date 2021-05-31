void threeWayPartition(vector<int>& arr,int a, int b)
    {
        int s,e;
        s = 0 ,  e = arr.size() - 1;
        
        for(int i=0; i<= e; ){
            if(arr[i] < a){
                swap(arr[i++], arr[s++]);
            }
            else if(arr[i] > b){
                swap(arr[i], arr[e--]);
            }
            else {
                i++;
            }
        }
    }
