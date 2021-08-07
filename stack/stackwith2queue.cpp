void QueueStack :: push(int x)
{
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{       int ele = -1;
        if(q1.empty()){
            return ele;
        }       
        else{
            while(q1.size() >=2){
                q2.push(q1.front());
                q1.pop();
            }
            ele = q1.front();
            q1.pop();
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
        return ele;
}
