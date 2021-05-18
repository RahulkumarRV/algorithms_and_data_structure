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
	//assume output will be like min, max
	if(n == 1){
		cout<<arr[0] << arr[1];
		return 0;
	}
	
	int minimum = 0, maximum = 0;
	if(arr[0] < arr[1]){
		minimum = arr[0];
		maximum = arr[1];
	}else {
		maximum = arr[0];
		minimum = arr[1];
	}
	
	for(int i =  2; i<n; i++){
		if(arr[i] < arr[i+1]){
			if(arr[i] < minimum){
				minimum = arr[i];
			}
			if(arr[i+1]  > maximum){
				maximum = arr[i+1];
			}
		}
		else{
			if(arr[i+1] < minimum){
				minimum = arr[i+1];
			}
			if(arr[i]  > maximum){
				maximum = arr[i];
			}
		}
	}
	
	cout<<minimum << " " << maximum; 
	
	return 0;
}
