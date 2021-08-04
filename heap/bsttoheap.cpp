void inorderTraversal(Node* root, vector<int> &arr){
	if(root == NULL){
		return ;
	}
	inorderTraversal(root->left, arr);
	arr.push_back(root->data);
	inorderTraversal(root->right, arr);
}

void BSTToMinHeap(Node* root, vector<int> &arr, int &i){
	if(root == NULL){
		return ;
	}
	
	root->data = arr[++i];
	BSTToMinHeap(root->left, arr, i);
	BSTToMinHeap(root->right, arr, i);
}

void convertBSTToMinHeap(Node* root){
	if(root == NULL){
		return ;
	}
	int i = -1;
	vector<int> arr;
	inorderTraversal(root, arr);
	BSTToMinHeap(root, arr, i);
}
