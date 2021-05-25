#include<bits/stdc++.h>

using namespace std;

int main(){

    int n1, n2, n3;
    cin>>n1 >> n2 >> n3;

    vector<int> a(n1), b(n2), c(n3);
    for(int i=0; i<n1; i++)
        cin>>a[i];
    for(int i=0; i<n2; i++)
        cin>>b[i];
    for(int i=0; i<n3; i++)
        cin>>c[i];

    int pre_a, pre_b, pre_c ;
    pre_a = pre_b = pre_c = INT_MIN;
    int i, j, k;
    i=j=k=0;
    vector<int> res;
    while(i < n1 && j < n2 && k < n3){

        while(i < n1 && a[i] == pre_a){
            i++;
        }
        while(j < n2 && b[j] == pre_b){
            j++;
        }
        while(k < n3 && c[k] == pre_c){
            k++;
        }




        if(a[i] == b[j] && b[j] == c[k]){
            res.push_back(a[i]); 
            pre_a = a[i];
            pre_b = b[j];
            pre_c = c[k];
            i++, j++, k++;
        }
        else if(a[i] > b[j]){
            pre_b = b[j];
            j++;
        }
        else if(b[j] > c[k]){
            pre_c = c[k];
            k++;
        }
        else{
            pre_a = a[i];
            i++;
        }
    }

    for(int i : res){
        cout<< i <<endl;
    }
    return 0;
}
