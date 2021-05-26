#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int sum = 0;
    unordered_set<int> set;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0 || set.find(sum) != set.end()){
            cout<<"yes"<<endl;
            return 0;
        }
        set.insert(sum);
    }

    cout<<"no"<<endl;

    return 0;
}
