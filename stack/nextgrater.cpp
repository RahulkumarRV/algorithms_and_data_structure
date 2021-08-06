vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<pair<long long, int>> st;
        st.push({arr[0], 0});
        for(int i=1; i<n; i++){
            if(st.empty()){
                st.push({arr[i], i});
                continue;
            }
            while(!st.empty() and st.top().first < arr[i]){
                arr[st.top().second] = arr[i];
                st.pop();
            }
            st.push({arr[i], i});
        }
        while(!st.empty()){
            arr[st.top().second] = -1;
            st.pop();
        }
        return arr;
    }
