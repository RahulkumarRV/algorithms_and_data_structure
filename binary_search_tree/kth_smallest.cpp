void inorderTraval(Node* root, int &k, int &nodeNumber){
        if(root == NULL){
            return ;
        }
        inorderTraval(root->left, k, nodeNumber);
        if(k == 1){
            nodeNumber = root->data;
        }
        k--;
        inorderTraval(root->right, k, nodeNumber);
    }
    int KthSmallestElement(Node *root, int k)
    {
        int nodeNumber = -1;
        inorderTraval(root, k, nodeNumber);
        if(nodeNumber == -1){
            return -1;
        }
        else{
            return nodeNumber;
        }
    }
