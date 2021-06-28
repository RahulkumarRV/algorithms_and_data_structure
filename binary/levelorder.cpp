vector<int> levelOrder(Node* node)
    {
        vector<int> res;
      queue<Node*> q;
      q.push(node);
      while(!q.empty()){
          int size = q.size();
          for(int i=0; i<size; i++){
              Node* value = q.front();
              if(value != NULL) {
                  res.push_back(value->data);
              }
              if(value != NULL){
                  if(value->left != NULL){
                      q.push(value->left);
                  }else{
                      q.push(NULL);
                  }
                  if(value->right != NULL){
                      q.push(value->right);
                  }else{
                      q.push(NULL);
                  }
              }
              q.pop();
          }
          
      }
      return res;
    }
