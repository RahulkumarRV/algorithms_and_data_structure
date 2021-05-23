#include<bits/stdc++.h>
#define l() length()
using namespace std;

int main(){
	
	string s;
	cin>>s;
	int n = s.l();
	for(int i=0; i< (1<<n); i++){
		string res = "";
		for(int j = 0; j<n; j++){
			if((1<<j) & i){
				res += s[j];
			}
		}
		cout<<res<<endl;
	}
	
	return 0;
}
