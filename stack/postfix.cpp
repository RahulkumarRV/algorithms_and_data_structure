bool isNumber(char c){
        return (c != '*' and c != '/'
        and c != '+' and c != '-');
    }
    int opration(int f, int s, char op){
        if(op == '*'){
            return f * s;
        }
        else if(op == '+'){
            return f + s;
        }
        else if(op == '-'){
            return f - s;
        }
        else{
            return f / s;
        }
    }
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;
        for(int i=0; i<S.size(); i++){
            if(isNumber(S[i])){
                st.push(S[i] - '0');
            }else{
                int s = st.top(); st.pop();
                int f = st.top(); st.pop();
                st.push(opration(f, s, S[i]));
            }
        }
        return st.top();
    }
