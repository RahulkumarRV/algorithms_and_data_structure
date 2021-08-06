vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> st;
        
        for(vector<int> interval : intervals){
            if(st.empty() or st.back()[1] < interval[0]){
                st.push_back(interval);
            }else{
                st.back()[1] =  max(st.back()[1], interval[1]);
        
            }
        }
        return st;
    }
