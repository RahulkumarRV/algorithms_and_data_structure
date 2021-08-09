#include<bits/stdc++.h>

using namespace std;

void interLeaveQueue(queue<int> &q){
    if(q.size() % 2 != 0){
        cout<< "input queue not have even size";
        return ;
    }
    int n = q.size() / 2;
    stack<int> st;
    for(int i=0; i<n; i++){
        int ele = q.front(); q.pop();
        st.push(ele);
    }
    while(!st.empty()){
        q.push(st.top()); st.pop();
    }
    for(int i=0; i<n; i++){
        int ele = q.front(); q.pop();
        q.push(ele);
    }
    for (int i=0; i<n; i++)
    {
        int ele = q.front(); q.pop();
        st.push(ele);
    }
    while(!st.empty()){
        q.push(st.top()); st.pop();
        q.push(q.front()); q.pop();
    }
    
}

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);

    int length = q.size();
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}



