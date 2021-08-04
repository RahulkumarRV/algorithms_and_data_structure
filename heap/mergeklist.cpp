struct compar{
        bool operator()(Node* a, Node* b){
            return a->data > b->data;
        }
    };
    Node * mergeKLists(Node *arr[], int k)
    {
           priority_queue<Node*, vector<Node*>, compar> pq;
           
           for(int i=0; i<k; i++){
               if(arr[i] != NULL){
                   pq.push(arr[i]);
               }
           }
           if(pq.empty()){
               return NULL;
           }
           Node* dummy = new Node(0);
           Node* temp =  dummy;
           while(!pq.empty()){
               Node* curr = pq.top();
               pq.pop();
               temp->next = curr;
               temp = temp->next;
               
               if(curr->next != NULL){
                   pq.push(curr->next);
               }
           }
           return dummy->next;
    }
