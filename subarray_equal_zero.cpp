ll findSubarray(vector<ll> arr, int n ) {
        map<ll, ll> m;
        ll count = 0;
        ll sum = 0;
        m.insert({sum , 1});
        ll i = 0;
        while(i < n){
            sum += arr[i++];
            auto value = m.find(sum);    
            if(value != m.end()){
                count += m[sum];
                m[sum]++;
            }
            else{
                m[sum] = 1;
            }
        }
        return count;
    }
