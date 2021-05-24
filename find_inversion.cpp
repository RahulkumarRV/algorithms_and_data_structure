#include<bits/stdc++.h>

using namespace std;
long long int findInversion(long long int arr[] , long long int n);
long long int mergeSort(long long int arr[], long long int temp[], long long int left, long long int right);
long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right);
int main(){

    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<findInversion(arr, n);
    return 0;
}
long long int findInversion(long long int arr[] , long long int n){
    long long int temp[n];
    return mergeSort(arr, temp, 0, (n - 1));
}

long long int mergeSort(long long int arr[], long long int temp[], long long int left , long long int right){
    
    long long int mid , count = 0;
    if(right > left){
        mid = (right + left) / 2;
        count += mergeSort(arr, temp, left, mid);
        count += mergeSort(arr, temp, mid + 1, right);
        count += merge(arr, temp, left, mid + 1, right);
    }
    return count;
}

long long int merge(long long int arr[], long long int temp[], long long int left, long long int mid, long long int right){
    
    long long int i, j, k;
    long long int count = 0;
    i = left, j = mid, k = left;
    while((i <= mid - 1) && (j <= right)){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            count = count + (mid - i);
        }
    }

    while(i <= mid - 1){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];    
    }
    for(i = left; i<= right; i++){
        arr[i] = temp[i];
    }
    return count;
}
