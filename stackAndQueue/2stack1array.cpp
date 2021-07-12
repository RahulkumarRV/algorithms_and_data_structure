void twoStacks :: push1(int x)
{
    if(top1 + 1 == top2){
        
    }else{
        top1++;
        arr[top1] = x;
    }
}

//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top2 - 1 == top1){
        
    }else{
        top2--;
        arr[top2] = x;
    }
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1 >= 0){
        int data = arr[top1];
        top1--;
        return data;
    }else{
        return -1;
    }
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    if(top2 < size){
        int data = arr[top2];
        top2++;
        return data;
    }else{
        return -1;
    }
}
