#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	cin>>s;
	
	map<char, int> map;
	for(char c : s){
		map[c]++;
	}
	
	for(auto i : map){
		cout<<i.first << " " << i.second << "\n";
	}
	return 0;
}
