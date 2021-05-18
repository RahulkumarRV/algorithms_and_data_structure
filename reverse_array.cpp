#include<bits/stdc++.h>
using namespace std;

int main(){
	//take number of elements in the array
	int n;
	cin>>n;
	//take array of number in vector 
	vector<int> arr(n);
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	for(int i=0; i<n/2; i++){
		int temp = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1- i] = temp;
	}
	
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
	
	return 0;
}
