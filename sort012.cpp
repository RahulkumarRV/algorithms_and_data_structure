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
	
	int low , mid , high;
	low = mid = 0;
	high = n -1;
	while(mid <= high){
		if(arr[mid] == 0){
			swap(&arr[low] , &arr[mid]);
			low++, mid++;
		}
		else if(arr[mid] == 2){
			swap(&arr[mid], &arr[high]);
			high--;
		}
		else if(arr[mid] == 1){
			mid++;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
