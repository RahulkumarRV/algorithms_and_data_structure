#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s1, s2;
	cin>>s1>>s2;
	
	s1 = s1  + s1;
	if(s1.compare(s2) == 0 || s1.length() != s2.length()){
		cout<<"false"<<endl;
		return 0;	
	}
	
	for(int i=0, j=0; i<s1.length(); i++){
		if(j == s2.length()){
			cout<<"true"<<endl;
			return 0;
		}
		else if(j == 0 && s1[i] == s2[j]){
			j++;
		}
		else if(j > 0 && s1[i] == s2[j]){
			j++;
		}
		else if(j > 0 &&  s1[i] != s2[j]){
			cout<<"false"<<endl;
			return 0;
		}
	}
	
	return 0;
}
