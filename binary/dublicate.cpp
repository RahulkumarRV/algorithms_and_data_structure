unordered_map<string, int> mp;
set<Node*> res;
string findDublicate(Node* root){
	if(root == NULL){
		return "";
	}
	
	string left = findDublicate(root->left);
	string right = findDublicate(root->right);
	string value = left + to_string(root->data) + right;
	mp[value]++;
	if(mp[value] == 2){
		res.insert(root);
	}
	return value;
} 
 
 void PrintPreorder(Node* root){
	 if(root == NULL){
		 return ;
	 }
	 cout<<root->data;
	 PrintPreorder(root->left);
	 PrintPreorder(root->right);
 }
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->right->left = newNode(2);
	root->right->left->left = newNode(4);
	root->right->right = newNode(4);
	findDublicate(root);
	
	for(Node* m : res){
		PrintPreorder(m);
		cout<<endl;
	}
	

    return 0;
}
