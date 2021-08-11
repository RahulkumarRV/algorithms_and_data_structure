class Solution{
public:
    int mc = 26;
    int minValue(string s, int k){
        if(s.size() <= k){
            return 0;
        }
        int count[mc] = {0};
        for(char c : s){
            count[c - 'a']++;
        }
        priority_queue<int> pq;
        for(int i=0; i<mc; i++){
            pq.push(count[i]);
        }
        
        while(k--){
            int t = pq.top();
            pq.pop();
            t--;
            pq.push(t);
        }
        int result = 0;
        while(!pq.empty()){
            int t = pq.top(); pq.pop();
            result += t * t;
            
        }
        return result;
    }
    
};
