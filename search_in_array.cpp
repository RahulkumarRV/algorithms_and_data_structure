#include<iostream.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int k;
	cin>>k; //diffrence
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	int i=0;
	while(i<n){
		if(arr[i] == x){
			cout<<i;
			return ;
		}
		i = i + max(1, abs(arr[i] - x)/k);
	}
	cout<<-1;
	return 0;
}
