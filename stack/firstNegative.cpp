
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    queue<long long> q;
    vector<long long> v;
    long long i = 0;
    for(i=0; i<K; i++){
        if(A[i] < 0){
            q.push(i);
        }
    }
    for(; i<N; i++){
        if(!q.empty()){
            v.push_back(A[q.front()]);
        }
        else{
            v.push_back(0);
        }
        while(!q.empty() and q.front() < i - K + 1){
            q.pop();
        }
        if(A[i] < 0){
            q.push(i);
        }
    }
    if(!q.empty()){
        v.push_back(A[q.front()]);
    }
    else{
        v.push_back(0);
    }
    return v;
 }
 
