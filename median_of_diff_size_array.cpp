#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, m; cin>>n>>m;
	vector<int> a(n), b(m);
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++)
		cin>>b[i];
	int m1 = -1, m2 = -1;
	
	int i, j; i=j=0;
	int index ;
	
		for(index = 0; index<= (n + m) /2; index++){
			m2 = m1;
			if(i != n && i != m){
				m1 = (a[i] < b[j]) ? a[i++] : b[j++];
			}
			else if(i < m){
				m1 = a[i++];
			}
			else {
				m1 = b[j++];
			}
		}
		if((n + m)  % 2){
			cout<< " median : " << m1;
		}
		else 
		cout<< " median : " << (m1 + m2) / 2;
	
    return 0;

}
