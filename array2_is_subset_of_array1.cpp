string isSubset(int a1[], int a2[], int n, int m) {
    if(n < m){
        return "No";
    }
    unordered_set<int> set;
    for(int i=0; i<n; i++){
        set.insert(a1[i]);
    }
    
    for(int i=0; i<m; i++){
        if(set.find(a2[i]) == set.end()){
            return "No";
        }
    }
    return "Yes";
}
