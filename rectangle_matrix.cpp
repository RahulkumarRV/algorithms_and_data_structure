#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
	cin>>n >> m;
	vector<vector<int>> mt(n, vector<int>(m));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>mt[i][j];
		}
	}
	
	vector<int> prevr(m, 0);
	
	int mx = 0;
	for(int i=0; i<n; i++){
		stack<int> st;
		vector<int> left(m, 0), right(m, 0);
		for(int k=0; k<m; k++){
			if(mt[i][k]){
				prevr[k] += 1;
			}
			else{
				prevr[k] = 0;
			}
			
		}
		
		for(int j=0; j<m; j++){
			if(st.empty()){
				st.push(j);
				left[j] = 0;
			}
			else{
				while(!st.empty() && prevr[st.top()] >= prevr[j]){
					st.pop();
				}
				
				left[j] = st.empty() ? 0 : st.top() + 1;
				st.push(j);
			}
		}
		while(!st.empty()){
			st.pop();
		}
		
		for(int j=m-1; j>=0; j--){
			if(st.empty()){
				st.push(j);
				right[j] = m -1;
			}
			else{
				while(!st.empty() && prevr[st.top()] >= prevr[j]){
					st.pop();
				}
				
				right[j] = st.empty() ? m-1 : st.top() - 1;
				st.push(j);
			}
		}
		for(int j=0; j<m; j++){
			
			mx = max(mx, prevr[j] * abs(right[j] - left[j] + 1));
		}
	}
	
	cout<< "max : " << mx;
    return 0;

}





