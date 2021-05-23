#include<bits/stdc++.h>
#define l() length()
#define s() size()
#define pb push_back
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> resultList;
        
        for(auto interval : intervals){
            if(resultList.empty() || resultList.back()[1] < interval[0]){
                resultList.push_back(interval);
            }else{
                resultList.back()[1] = max(resultList.back()[1], interval[1]);
            }
        }
        return resultList;
        
    }

int main(){
	vector<vector<int>> intervals;
	
	cout<<"Enter Intervals size :" <<endl;
	int n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		int start, end;
		cin>>start >> end;
		intervals.pb({start, end});
	}
	intervals = merge(intervals);
	return 0;
}
