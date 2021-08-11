vector<int> nextSmaller(vector<int> &arr){
    int n = arr.size();
    stack<int> st;
    st.push(arr[0]);
    vector<int> res;
    for(int i=1; i<n; i++){
        if(st.empty()){
            st.push(arr[i]);
            continue;
        }
        while(!st.empty() and st.top() > arr[i]){
            res.push_back(arr[i]);
        }
        st.push(arr[i]);
    }
    while(!st.empty()){
        res.push_back(st.top()); st.pop();
    }
    return res;
}
