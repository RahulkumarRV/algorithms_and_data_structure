void find(Node* root, int l, int h, int &count){
    if(root == NULL){
        return ;
    }
    find(root->left, l, h, count);
    int data = root->data;
    if(data >= l and data <= h){
        count++;
    }
    find(root->right, l, h, count);
}

int getCount(Node *root, int l, int h)
{
   int count  = 0;
   find(root, l, h, count);
   return count;
}
