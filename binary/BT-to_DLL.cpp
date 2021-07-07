class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    void trav(Node *root, Node** head)
    {
        if(root == NULL){
            return ;
        }
        static Node* prev = NULL;
        trav(root->left, head);
        if(prev == NULL){
            *head = root;
        }
        else{
            root->left = prev;
            prev->right = root;
            
        }
        prev = root;
        trav(root->right, head);
    }
    Node * bToDLL(Node *root)
    {
        Node *head = NULL;
        trav(root, &head);
        return head;
    }
};
