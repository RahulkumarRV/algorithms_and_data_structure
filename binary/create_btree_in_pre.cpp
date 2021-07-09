class Solution {
public:
    int preorderindex = 0;
    unordered_map<int, int> inordermap;
    
    TreeNode* btree(vector<int> &preorder, int left, int right){
        if(left > right){
            return NULL;
        }
        int rootvalue = preorder[preorderindex++];
        TreeNode* node = new TreeNode(rootvalue);
        
        node->left = btree(preorder, left, inordermap[rootvalue] - 1);
        node->right = btree(preorder, inordermap[rootvalue] + 1, right);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preorderindex = 0;
        for(int i=0; i<inorder.size(); i++){
            inordermap.insert({inorder[i], i});
        }
        return btree(preorder, 0, preorder.size() - 1);
    }
};
