char* reverse(char *s, int len)
{
    stack<char> st;
    for(int i=0; i<len; i++){
        st.push(s[i]);
    }
    for(int i=0; i<len; i++){
        s[i] = st.top(); st.pop();
    }
    return s;
    
}
