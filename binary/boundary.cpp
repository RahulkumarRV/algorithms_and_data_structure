class Solution {
public:
    void findLeft(Node* root, vector<int> &list){
        if(root == NULL){
            return ;
        }
        if(root->left){
            list.push_back(root->data);
            findLeft(root->left, list);
        }
        else if(root->right){
            list.push_back(root->data);
            findLeft(root->right, list);
        }
    }
    void findLeaf(Node* root, vector<int> &list){
        if(root == NULL){
            return ;
        }
        if(root->left == NULL && root->right == NULL){
            list.push_back(root->data);
            return ;
        }
        else{
            findLeaf(root->left, list);
            findLeaf(root->right, list);
        }
    }
    void findright(Node *root, vector<int> &list){
        if(root == NULL){
            return ;
        }
        if(root->right){
            list.push_back(root->data);
            findright(root->right, list);
        }
        else if(root->left){
            list.push_back(root->data);
            findright(root->left, list);
        }
    }
    vector <int> printBoundary(Node *root)
    {
        vector<int> list;
        list.push_back(root->data);
        findLeft(root->left, list);
        //list.erase(list.begin()+list.size() - 1);
        findLeaf(root, list);
        //list.erase(list.begin()+list.size() - 1);
        vector<int> r;
        findright(root->right, r);
        for(int i=r.size() - 1; i>=0; i--){
            list.push_back(r[i]);
        }
        return list;
    }
};
