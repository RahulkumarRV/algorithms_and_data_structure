bool inList(vector<string> &list, string word){
    for(int i=0 ; i<list.size(); i++){
        if(list[i].compare(word) == 0){
            return true;
        }
    }
    return false;
}
int wordBreak(string A, vector<string> &B) {
   
    bool dp[A.size() + 1] = {false};
    for(int i=1; i<=A.size(); i++){
        if(dp[i] == false and inList(B, A.substr(0, i))){
            dp[i] = true;
        }
        
        if(dp[i] == true){
            if(i == A.size()){
                return true;
            }
            for(int j=i+1; j<=A.size(); j++){
                if(dp[j] == false and inList(B, A.substr(i, j-i))){
                    dp[j] = true;
                }
                
                if(j == A.size() and dp[j] == true){
                    return true;
                }
            }
        }
    }
   
    return false;
}
