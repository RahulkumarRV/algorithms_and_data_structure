#include<bits/stdc++.h>
#define l() length()
#define s() size()
#define pd push_back
using namespace std;



int main(){
	vector<string> res;
	string s;
	cin>>s;
	int zcount, ocount;
	zcount = ocount = 0;
	string ref = "";
	for(int i=0; i<s.l(); i++){
		if(zcount == ocount){
			res.pd(ref);
			ref = "";
		}
		if(s[i] == '0'){
			zcount++;
			ref += s[i];
		}
		else if(s[i] == '1'){
			ocount++;
			ref += s[i];
		}
	}
	if(res.s() == 0){
		cout<<"-1"<<endl;
	}
	else{
		cout<<res.s()<<endl;
	}
	return 0;
}
