bool isopensymbole(char x){
        if(x == '(' or x == '{' or x == '['){
            return true;
        }
        else{
            return false;
        }
    }
    bool matchtop(char s , char x){
        if((s == '(' and x == ')') || (s == '{' and x == '}')
            or (s == '[' and x == ']')){
                return true;
        }
        else {
            return false;
        }
    }
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0; i<x.size(); i++){
            if(isopensymbole(x[i])){
                st.push(x[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(matchtop(st.top() , x[i])){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (st.empty());
    }
