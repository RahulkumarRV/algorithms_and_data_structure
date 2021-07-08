Node* pred(Node* root){
    if(root == NULL){
        return NULL;
    }
    if(root->right == NULL){
        return root;
    }
    else{
        return pred(root->right);
    }
}

Node* succ(Node* root){
    if(root == NULL) {
        return NULL;
    }
    if(root->left == NULL){
        return root;
    }
    else{
        return succ(root->left);
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(root == NULL){
        return ;
    }
    if(root->key == key){
        if(root->left != NULL)
            pre = pred(root->left);
        if(root->right != NULL)
            suc = succ(root->right);
        return;
    }
    if(key < root->key)
    suc = root, findPreSuc(root->left, pre, suc, key);
    else
    pre = root, findPreSuc(root->right, pre, suc, key);

}
