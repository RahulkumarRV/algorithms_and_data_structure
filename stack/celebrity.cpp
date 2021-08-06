int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        while(st.size() >= 2){
            int f = st.top(); st.pop();
            int s = st.top(); st.pop();
            if(M[f][s] == 1){
                st.push(s);
            }else{
                st.push(f);
            }
        }
        int p = st.top();
        for(int i=0; i<n; i++){
            if(i != p){
                if(M[i][p] == 0 or M[p][i] ==  1){
                    return -1;
                }
            }
        }
        return p;
    }
