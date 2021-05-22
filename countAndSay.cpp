 string countAndSay(int n) {
        if(n <=  1) return "1";
        string s2 = countAndSay(n-1);
        string res = "";
        char prev = s2[0];
        int count = 1;
        for(int i=1; i<s2.length(); i++){
            if(prev == s2[i]){
                count++;
            }
            else if(prev != s2[i]){
                res += to_string(count) + prev;
                count = 1;
                prev = s2[i];
            }

        }
        res += to_string(count) + prev;
            return res;
        
    }
