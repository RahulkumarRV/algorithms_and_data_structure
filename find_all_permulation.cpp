#include<bits/stdc++.h>
#define l() length()
#define s() size()
using namespace std;

vector<string> res;

void swap(char &a, char &b){
	char t = a;
	a = b;
	b = t;
}
void find_p(string s, int l, int r){
	if(l == r){
		res.push_back(s);
	}
	for(int i=l; i<=r; i++){
		swap(s[l], s[i]);
		find_p(s, l+1, r);
		swap(s[l], s[i]);
	}
}

int main(){
	
	string s;
	cin>>s;
	find_p(s, 0, s.l() - 1);
	sort(res.begin(), res.end());
	for(int i=0; i<res.s(); i++){
		cout<<res[i]<< " ";
	}
	
	return 0;
}
