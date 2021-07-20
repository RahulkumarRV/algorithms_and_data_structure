void printVector(const vector<int>& v, int i){
	for(int j=i; j<v.size(); j++){
		cout<< v[j] << " ";
	}
	cout<<endl;
}

void getKPath(Node* root, vector<int> &path, int k){
	if(!root){
		return ;
	}
	
	path.push_back(root->data);
	getKPath(root->left, path, k);
	getKPath(root->right, path, k);
	
	int sum = 0;
	for(int i=path.size()-1; i>=0; i--){
		sum += path[i];
		if(sum == k){
			printVector(path, i);
		}
	}
	path.pop_back();
}

void printKPath(Node* root, int k){
	vector<int> path;
	getKPath(root, path, k);
}

int main(){
	Node *root = new Node(1);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right = new Node(-1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->right = new Node(2);
	
	printKPath(root, 5);
	return 0;
}
