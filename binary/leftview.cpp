vector<int> leftView(Node *root)
{
    if(!root){
        return vector<int>();
    }
    vector<int> res;
   queue<Node*> qu;
   qu.push(root);
   while(!qu.empty()){
       int size = qu.size();
       for(int i=0; i<size; i++){
           Node *cur = qu.front();
           if(i == 0){
               res.push_back(cur->data);
           }
           if(cur->left != NULL){
               qu.push(cur->left);
           }
           if(cur->right != NULL){
               qu.push(cur->right);
           }
           qu.pop();
       }
   }
   return res;
}
