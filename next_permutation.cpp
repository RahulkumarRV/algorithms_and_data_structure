class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> a){
        int l = n - 2, i = n-1;
    for(l ; l>=0; l--){
        if(a[l] < a[l+1]){
            //swap(a[l], a[l+1]);
            break;
        }
    }
    
    l = (l < 0) ? 0 : l;
    for(i; i>l; i--){
        if(a[l ] < a[i]){
            swap(a[i], a[l]);
            break;
        }
    }
    //cout<<l << " "<< i << endl;
    if(i == 0){
        sort(a.begin(), a.end());
    }else
    sort(a.begin() + l + 1, a.end());
    return a;
    }
};
