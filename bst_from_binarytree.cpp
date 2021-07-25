Node* getBinaryTree(vector<int> list, int left, int right){
        if(left > right){
            return NULL;
        }
        int mid = (left + right) / 2;
        Node *root = new Node(list[mid]);
        root->left = getBinaryTree(list, left, mid-1);
        root->right = getBinaryTree(list, mid + 1, right);
        return root;
    }
    
    void getNodes(Node* root, vector<int> &res){
        if(root == NULL){
            return ;
        }
        res.push_back(root->data);
        getNodes(root->left, res);
        getNodes(root->right, res);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> res;
        getNodes(root, res);
        sort(res.begin(), res.end());
        return getBinaryTree(res, 0, res.size() - 1);
    }
