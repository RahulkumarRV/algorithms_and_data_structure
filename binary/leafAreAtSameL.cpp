class Solution{
  public:
    /*You are required to complete this method*/
    bool tree(Node* root, int l, int *pl){
        if(root ==NULL){
            return true;
        }
        
        if(root->left == NULL and root->right == NULL){
            if(*pl == 0){
                *pl = l;
                return true;
            }
            
            return l == *pl;
        }
        
        bool left = tree(root->left, l+ 1, pl);
        bool right = tree(root->right, l+1, pl);
        return left and right;
        
    }
    
    bool check(Node *root)
    {
        int p = 0;
        return tree(root, 0, &p);
    }
};
