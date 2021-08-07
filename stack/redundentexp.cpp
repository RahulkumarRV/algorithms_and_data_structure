bool checkRedundancy(string& str)
{
   stack<int> st;
   for(char ch : str){
     if(ch == ')'){
       char t = st.top();
       st.pop();
       bool flag = true;
       while(!st.empty() and t != '('){
         if(t == '+' or t == '*'
           t == '/' or t == '-'){
           flag = false;
         }
         t = st.top();
         st.pop();
       }
       if(flag == true){
         return true;
       }
     }else{
       st.push(ch);
     }
   }
  return false;
}
