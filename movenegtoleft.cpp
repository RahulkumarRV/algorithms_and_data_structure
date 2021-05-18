#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	//take number of elements in the array
	int n;
	cin>>n;
	//take array of number in vector 
	vector<int> arr(n);
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	int l, r;
	l = 0, r = n-1;
	
	while(l < r){
		if(arr[l] < 0){
			l++;
		}else{
			swap(&arr[l], &arr[r]);
			r--;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
