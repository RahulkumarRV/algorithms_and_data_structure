class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int SumTree(Node *root)
    {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            int data = root->data;
            root->data = 0;
            return data;
        }
        
        int left = SumTree(root->left);
        int right = SumTree(root->right);
        int data = root->data;
        root->data = left + right ;
        return left + right + data;
    }
    
    void toSumTree(Node *node)
    {
        SumTree(node);
    }
};
