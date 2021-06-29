vector<int> topView(Node *root)
    {
        if(!root) return vector<int>();
        vector<int> res;
        
        queue<pair<Node* , int>> q;
        q.push({root, 0});
        
        int min = 1, max = 0;
        
        while(!q.empty()){
            int size = q.size();
            
            for(int i=1; i<= size; i++){
                Node* cur = q.front().first;
                int level = q.front().second;
                if(cur->left != NULL){
                    q.push({cur->left, level -1});
                }
                if(cur->right != NULL){
                    q.push({cur->right, level + 1});
                }
                if(level < min){
                    res.insert(res.begin(), cur->data);
                    min = level;
                }
                
                if(level > max){
                    res.push_back(cur->data);
                    max = level;
                }
                q.pop();
            }
        }
        return res;
    }
