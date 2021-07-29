Node* findSucessor(Node* root, int data, Node*& suc){
	if(root == NULL){
		return newNode(data);
	}
	
	if(data < root->data){
		suc = root;
		root->left = findSucessor(root->left, data, suc);
	}
	
	else if(data > root->data){
		root->right = findSucessor(root->right, data, suc);
	}
	return root;
	
}

void replaceWithRight(vector<int> &arr){
	int n = arr.size();
	Node* root = NULL;
	
	for(int i = n-1; i >= 0; i--){
		Node* sur = NULL;
		root = findSucessor(root, arr[i], sur);
		if(sur){
			arr[i] = sur->data;
		}else{
			arr[i] = -1;
		}
	}
	
}
