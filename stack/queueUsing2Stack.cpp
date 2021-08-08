void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    if(!s2.empty()){
        int t = s2.top();
        s2.pop();
        return t;
    }
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    if(!s2.empty()){
        int t = s2.top();
        s2.pop();
        return t;
    }
    return -1;
}
