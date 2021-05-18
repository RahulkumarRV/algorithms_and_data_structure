#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int doIntersection(int a[], int n, int b[], int m)  {
        sort(a, a+n);
        sort(b, b+m);
        int i , j , count = 0;
        i = j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                while(i < n && a[i] == a[i+1]) i++;
                while(j < m && b[j] == b[j+1]) j++;
                i++, j++, count++;
            }
            
        }
        
        return count;
    }
int main(){
	
	//take number of elements in the array
	int n;
	cin>>n;
	//take array of number in vector 
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	
	//take number of elements in the array
	int m;
	cin>>m;
	//take array of number in vector 
	int brr[m];
	for(int i=0; i<m; i++){
	    cin>>brr[i];
	}
	cout<<doIntersection(arr, n, brr, m);
	
	
	return 0;
}
