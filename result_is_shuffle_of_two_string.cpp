#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s1, s2, res;
	cin>>s1>> s2 >> res;
	
	if(s1.length() + s2.length() > res.length()){
		cout<<"false";
		return 0;
	}
	
	int i = 0, j = 0, k= 0;
	while(k < res.length()){
		if(res[k] == s1[i]){
			i++;
		}
		else if(res[k] == s2[j]){
			j++;
		}
		else {
			cout<<"false";
			return 0;
		}
		k++;
	}
	
	if(i < s1.length() || j < s2.length()){
		cout<<"false";
		return 0;
	}
	cout<<"true";
	
	return 0;
}
