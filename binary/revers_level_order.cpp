vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*> q;
    vector<int> res;
    
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0; i<size; i++){
            Node* value = q.front();
            res.insert(res.begin() + i, value->data);
            if(value->left != NULL){
                q.push(value->left);
            }
            if(value->right != NULL){
                q.push(value->right);
            }
            q.pop();
        }
    }
    return res;
}
