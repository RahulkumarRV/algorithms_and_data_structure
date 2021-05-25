class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count = 0;
        unordered_map<int, int> map;
        for(int i=0; i<n; i++){
            map[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            count += map[k - arr[i]];
            if(arr[i] == k - arr[i]){
                count--;
            }
        }
        return count / 2;
    }
};
