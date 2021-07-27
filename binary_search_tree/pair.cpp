bool findsecondEle(Node* root, int k){
    if(root == NULL){
        return false;
    }
    Node* temp = root;
    while(temp != NULL){
        if(temp->data == k){
            return true;
        }
        else if(temp->data < k){
            temp = temp->right;
        }
        else{
            temp = temp->left;
        }
    }
    return false;
}
void inorder(Node* root,Node* root2, int k, int &count){
    if(root == NULL){
        return ;
    }
    inorder(root->left, root2, k, count);
    bool iscontained = findsecondEle(root2, k - root->data);
    if(iscontained){
        count++;
    }
    inorder(root->right, root2, k, count);
}
int countPairs(Node* root1, Node* root2, int x)
{
    int count = 0;
    inorder(root1, root2, x, count);
    return count;
}
