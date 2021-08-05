bool isopen(char ch){
    	if(ch == '(' or ch == '{' or ch == '['){
    		return true;
    	}
    	else{
    		return false;
    	}
    }
    
    bool comp(char f, char s){
    	if(f == '(' and s == ')'){
    		return true;
    	}
    	else if(f == '{' and s == '}'){
    		return true;
    	}
    	else if(f == '[' and s == ']'){
    		return true;
    	}
    	else{
    		return false;
    	}
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        if(s == "" or s.length() == 0){
		    return true;
    	}
    	stack<char> st;
    	for(int i=0; i<s.size(); i++){
    		if(isopen(s[i])){
    			st.push(s[i]);
    			continue;
    		}
    	    
		    if(st.empty()){
		        return false;
		    }
			char t = st.top();
			st.pop();
			//cout<< t << " " << s[i]<<endl;
			if(!comp(t, s[i])){
			    //cout<< "1" <<endl;
				return false;
			}
    		
    	}
    	//cout<< st.empty() << endl;
    	return st.empty();
    }
