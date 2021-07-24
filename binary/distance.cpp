int findLevel(Node* root, int v, int l){
	if(root == NULL) return NULL;

	if(root->data == v){
		return l;
	}

	int left = findLevel(root->left, v, l + 1);
	return left ? left : findLevel(root->right, v, l + 1);
}

Node* findDistance(Node* root, int n1, int n2, int &d1, int &d2, int &dist, int level){
	if(root == NULL){
		return NULL;
	}

	if(root->data == n1){
		d1 = dist;
		return root;
	}
	if(root->data == n2){
		d2 = dist;
		return root;
	}

	Node* left = findDistance(root->left, n1, n2, d1, d2, dist, level + 1);
	Node* right = findDistance(root->right, n1, n2, d1, d2, dist, level + 1);

	if(left and right){
		dist = d1 + d2 - (2 * level);
		return root;
	}

	return left ? left : right;

}

int Distance(Node* root, int n1, int n2){
	if(root == NULL){
		return 0;
	}
	int d1, d2, dist;
	Node *lca = findDistance(root, n1, n2, d1, d2, dist, 0);

	if(d1 != -1 and d2 != -1){
		return dist;
	}

	if(d1 != -1){
		return findLevel(lca, n2, 0);
	}
	if(d2 != -1){
		return findLevel(lca, n1, 0);
	}

	return -1;
	
}
