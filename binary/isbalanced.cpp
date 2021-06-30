bool getheight(Node* root, int *height){
    int lh , rh;
    lh = rh = 0;
    int l , r;
    l = r = 0;
    if(root == NULL){
        *height = 0;
        return 1;
    }
    
    l = getheight(root->left, &lh);
    r = getheight(root->right, &rh);
    
    *height = max(lh, rh) + 1;
    
    if(abs(lh - rh) >= 2){
        return false;
    }
    else return l && r;
}

bool isBalanced(Node *root)
{
    int height =  0;
    
    return getheight(root, &height);;
}
