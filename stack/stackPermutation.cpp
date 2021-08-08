#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cout<< "Enter size = ";
	cin>>n;
	queue<int> q1;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		q1.push(a);
	}
	queue<int> q2;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		q2.push(a);
	}
	stack<int> st;
	while(!q1.empty()){
		int t = q1.front();
		q1.pop();
		if(t == q2.front()){
			q2.pop();
			while(!st.empty()){
				if(st.top() == q2.front()){
					st.pop();
					q2.pop();
				}else {
					break;
				}
			}
		}
		else{
			st.push(t);
		}
	}
	if(st.empty() and q1.empty()){
		cout<< "\nYes";
	}
	else{
		cout<< "\nNo";
	}
	return 0;
}















