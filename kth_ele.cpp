#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool comp(const pair<ll, ll> &a, const pair<ll, ll> &b){
	return a.first < b.first;
}

int main(){
	ll t; cin>>t;
	while(t--){
		ll n, q;
		cin>>n>>q;
		vector<pair<ll, ll>> ab(n);
		for(ll i=0; i<n; i++){
			ll a, b;
			cin>>a>>b;
			ab[i] = {a,b};
			
		}
		
		sort(ab.begin(), ab.end());
		
		ll newn = 0;
		for(ll i=1; i<ab.size(); i++){
			
			if(ab[newn].second >= ab[i].first){
				ab[newn].second = max(ab[newn].second, ab[i].second);
				
			}else{
				newn++;
				ab[newn] = ab[i];
			}
		}
		while(q--){
			ll k;
			cin>>k;
			ll ans = -1;
			for(ll i=0; i<=newn; i++){
				if((ab[i].second - ab[i].first + 1) >= k){
					ans = ab[i].first + k - 1;
					break;
				}
				else{
					k = k - (ab[i].second - ab[i].first + 1);
				}
			}
			cout<< ans << "\n";
		}
		
	}
	
	
	
	return 0;
}




