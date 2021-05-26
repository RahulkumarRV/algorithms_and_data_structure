#include<bits/stdc++.h>

using namespace std;
void flip1(vector<int> &arr, int neg, int pos);
void rotate(vector<int> &arr, int n);
void flip2(vector<int> &arr, int neg, int pos);

int main(){

    int n, neg, pos;
    neg = pos  = 0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < 0) neg++;
        else pos++;
    }
    sort(arr.begin(), arr.end());
    if(neg <= pos){
        flip1(arr, neg, pos);
    }else{
        rotate(arr, n);
        flip2(arr, neg, pos);
    }

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";    
    }
    return 0;
}

void rotate(vector<int> &arr, int n){
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void flip1(vector<int> &arr, int neg, int pos){
    if(neg%2 == 1){
        for(int i=1; i<neg; i+=2){
            int c = arr[i];
            int a = arr[i + neg];
            int temp = c;
            arr[i] =a;
            arr[i + neg] = temp;
        }
    }
    else{
        for(int i=1; i<=neg; i+=2){
            int c = arr[i];
            int a = arr[i + neg - 1];
            int temp = c;
            arr[i] = a;
            arr[i + neg - 1] = temp;    
        }  
    }
}

void flip2(vector<int> &arr, int neg, int pos){
    if(pos%2 == 1){
        for(int i=1; i<pos; i+=2){
            int c = arr[i];
            int a = arr[i + pos];
            int temp = c;
            arr[i] =a;
            arr[i + pos] = temp;
        }
    }
    else{
        for(int i=1; i<=pos; i+=2){
           int c = arr[i];
            int a = arr[i + pos - 1];
            int temp = c;
            arr[i] = a;
            arr[i + pos - 1] = temp;      
        }
    }
}
