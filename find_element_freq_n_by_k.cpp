void find_element(vector<int> arr, int n, int k){
  int x = n / k;
  uordered_map<int , int> map;
  for(int i=0; i<n; i++){
    map[arr[i]]++;
  }
  for(auto i : map){
    if(i.second > x){
      cout<<i.first<< " ";
    }
  }
}
