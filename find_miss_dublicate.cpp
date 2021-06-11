int *findTwoElement(int *arr, int n) {
        int *res;
        for(int i=0; i<n; i++){
            if(arr[abs(arr[i]) - 1] > 0){
                arr[abs(arr[i]) - 1]  = -arr[abs(arr[i]) - 1];
            }
            else{
                res[0] = abs(arr[i]);
            }
        }
        for(int i=0;  i<n; i++){
            if(arr[i] > 0){
                res[1] = i+1;
            }
        }
        return res;
    }


int majorityElement(int a[], int size)
    {
        int maj_ele = 0, count = 1;
        for(int i=1; i<size; i++){
            if(a[maj_ele] == a[i]){
                count++;
            }else {
                count--;
            }
            if(count == 0){
                maj_ele = i;
                count = 1;
            }
        }
        int cand = a[maj_ele]; count = 0;
        for(int i=0; i<size; i++){
            if(a[i] == cand){
                count++;
            }
        }
        if(count > size / 2){
            return cand;
        }
        else {
            return -1;
        }
    }
};
