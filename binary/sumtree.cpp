class Solution
{
    public:
    bool isSumTree(Node* root)
    {
         if(root == NULL){
             return true;
         }
         isSumTree(root->left);
         isSumTree(root->right);
         int sum = 0;
         if(root->left != NULL){
             sum += root->left->data;
         }
         if(root->right != NULL){
             sum += root->right->data;
         }
         int data = root->data;
         root->data += sum;
         return data == sum;
    }
};
