void findInorder(Node* root, vector<int> &list){
        if(root == NULL){
            return ;
        }
        findInorder(root->left, list);
        list.push_back(root->data);
        findInorder(root->right, list);
    }
    
    int kthLargest(Node *root, int K)
    {
        vector<int> list;
        findInorder(root, list);
        return list[list.size() - K];
    }
