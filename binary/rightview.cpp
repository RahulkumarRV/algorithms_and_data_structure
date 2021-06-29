vector<int> rightView(Node *root)
    {
       if(!root) return vector<int>();
       vector<int> res;
       queue<Node*> qu;
       qu.push(root);
       while(!qu.empty()){
           int size = qu.size();
           for(int i=1; i<=size; i++){
               Node* cur = qu.front();
               qu.pop();
               if(i == size){
                   res.push_back(cur->data);
               }
               if(cur->left){
                   qu.push(cur->left);
               }
               if(cur->right){
                   qu.push(cur->right);
               }
               
           }
           
       }
       return res;
    }
