class Solution
{
public:

    
    void populateNext(Node *root)
    {
        static Node* prev = NULL;
        if(root != NULL){

            populateNext(root->right);
            root->next = prev;
            prev = root;
            
            populateNext(root->left);
        }
    }
};
