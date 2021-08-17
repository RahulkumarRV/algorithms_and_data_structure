class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList)     {
        unordered_set<string> us;
        int endPresent = 0;
        for(string w : wordList){
            if(w.compare(endWord) == 0){
                endPresent = 1;
            }
            us.insert(w);
        }
        if(endPresent == 0){
            return 0;
        }
        
        queue<string> q;
        q.push(beginWord);
        int depth = 0;
        while(!q.empty()){
            depth += 1;
            int size = q.size();
            while(size--){
                string cur = q.front();
                q.pop();
                for(int i=0; i<cur.size(); i++){
                    string temp = cur;
                    for(int j='a'; j<='z'; j++){
                        temp[i] = j;
                        if(cur.compare(temp) == 0){
                            continue;
                        }
                        if(temp.compare(endWord) == 0){
                            return depth + 1;
                        }
                        if(us.find(temp) != us.end()){
                            q.push(temp);
                            us.erase(temp);
                        }
                    }
                }
                
            }
            
        }
        return 0;
    }
};
