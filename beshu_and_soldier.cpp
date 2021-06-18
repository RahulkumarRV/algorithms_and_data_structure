#include<bits/stdc++.h>
using namespace std;


int main(){

    int numberofsoliders;
    cin>>numberofsoliders;
    vector<int> powerofsoliders(numberofsoliders);
    for(int i=0; i<numberofsoliders; i++){
        cin>>powerofsoliders[i];
    }
    int numberofrounds;
    cin>>numberofrounds;
    //sort the soliders powers
    sort(powerofsoliders.begin(), powerofsoliders.end());

    while(numberofrounds--){
        int powerofbeshu;
        cin>>powerofbeshu;
        auto indexoflastsolider = upper_bound(powerofsoliders.begin(), powerofsoliders.end(), powerofbeshu);
        
        cout<< (indexoflastsolider - powerofsoliders.begin()) << " ";
        int sumofsoliderspower = 0;
        for(auto i = powerofsoliders.begin(); i != indexoflastsolider; i++){
            sumofsoliderspower += *i;
        }
        cout<< sumofsoliderspower << endl;
    }
    
    return 0;
}
