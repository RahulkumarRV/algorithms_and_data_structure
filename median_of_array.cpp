#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; cin>>n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<n; i++)
		cin>>b[i];
	int m1 = -1, m2 = -1;
	
	int i, j; i=j=0;
	int index ;
	
	for(index=0; index<=n; index++){
		if(i == n){
			m1 = m2;
			m2 = b[0];
			break;
		}
		else if(j == n){
			m1 = m2;
			m2 = a[0];
		}
		else if(a[i] <= b[j]){
			m1 = m2;
			m2 = a[i++];
		}
		else{
			m1 = m2;
			m2 = b[j++];
		}
	}
	
	cout<< " median : " << (m1 + m2) / 2;
    return 0;

}

