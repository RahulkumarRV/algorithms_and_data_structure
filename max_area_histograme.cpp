int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(i);
                left[i] = 0;
            }
            else{
                while(!st.empty() && heights[st.top()] >= heights[i]){
                    st.pop();
                }
                left[i] = st.empty() ? 0 : st.top() + 1;
                st.push(i);
            }
        }
        while(!st.empty())
            st.pop();
        
        for(int i=n-1; i>=0; i--){
            if(st.empty()){
                st.push(i);
                right[i] = n-1;
            }
            else{
                while(!st.empty() && heights[st.top()] >= heights[i]){
                    st.pop();
                }
                right[i] = st.empty() ? n-1 : st.top() - 1;
                st.push(i);
            }
        }
        int max_ = 0;
        for(int i=0; i<n; i++){
            max_ = max(max_, heights[i] * (right[i] - left[i] + 1));
        }
        return max_;
    }