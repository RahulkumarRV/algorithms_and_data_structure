#include<bits/stdc++.h>

using namespace std;

class cqueue{
    private:
        vector<int> arr;
        int size;
        int front, rear;
        int eleCount = 0;
    public:
        cqueue(){
            this->size = 0;
            arr.resize(this->size);
            this->front = this->rear = -1;
        }
        cqueue(int size){
            this->size = size;
            arr.resize(size);
            this->front = this->rear = -1;
        }
        bool isFull(){
            if((front == 0 and rear == size-1) or (rear == front - 1)){
                return true;
            }
            else{
                return false;
            }
        }
        bool isEmpty(){
            return front == -1;
        }
        void push(int ele){
            if(isFull()){
                cout<<"circular queue is full\n";
            }
            else{
                if(front == -1){
                    front = rear = 0;
                    arr[rear] = ele;
                }
                else if(rear == size - 1 and front != 0){
                    rear = 0;
                    arr[rear] = ele;
                }
                else{
                    rear++;
                    arr[rear] = ele;
                }

            }
        }

        int pop(){
            if(isEmpty()){
                cout<<"circular queu is empty\n";
                return INT_MIN;
            }
            int ele = arr[front];
            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }
            else if(front == size - 1){
                front = 0;
            }
            else{
                front++;
            }
            return ele;
        }


};

int main(){
    cqueue q(3);
    q.push(1);
    cout<<q.pop();
    //cout<< q.pop();
    return 0;
}
