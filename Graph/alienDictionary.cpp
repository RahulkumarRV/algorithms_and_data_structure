class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        vector<char> adj[26];
        vector<int> id(K);
        for(int i=1; i<N; i++){
            int minsize = min(dict[i].size(), dict[i-1].size());
            int j = 0;
            for(j = 0;  j<minsize; j++){
                if(dict[i][j] != dict[i-1][j]){
                    adj[dict[i-1][j] - 'a'].push_back(dict[i][j]);
                    id[dict[i][j] - 'a']++;
                    break;
                }
            }
            if(j == minsize){
                
            }
        }
        queue<char> q;
        for(int i=0; i<26; i++){
            if(id[i] == 0){
                q.push('a' + i);
            }
        }
        string res = "";
        while(!q.empty()){
            char data = q.front();
            q.pop();
            res.push_back(data);
            for(char ch : adj[data - 'a']){
                id[ch - 'a']--;
                if(id[ch - 'a'] == 0){
                    q.push(ch);
                }
            }
        }
        return res;   
        
    }
};
