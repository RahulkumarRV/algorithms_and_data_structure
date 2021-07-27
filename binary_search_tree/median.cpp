int morriorTraversal(Node* root){
	if(root == NULL){
		return 0;
	}
	int count = 0;
	Node *cur, *pre;
	cur = root;
	while(cur != NULL){
		if(cur->left == NULL){
			count++;
			cur = cur->right;
		}
		else{
			pre = cur->left;
			while(pre->right != NULL and pre->right != cur){
				pre = pre->right;
			}
			if(pre->right == NULL){
				pre->right = cur;
				cur = cur->left;
			}
			else{
				pre->right = NULL;
				count++;
				cur = cur->right;
			}
		}
	}
	return count;
} 

int findMedian(Node* root){
	if(root == NULL){
		return 0;
	}
	int count = morriorTraversal(root);
	int currentCount = 0;
	Node *cur, *pre, *prev;
	cur = root;
	while(cur != NULL){
		if(cur->left == NULL){
			currentCount++;
			if(count % 2 != 0 and currentCount == (count + 1) / 2){
				return prev->data;
			}
			else if(count % 2 == 0 and currentCount == (count / 2) + 1){
				return (prev->data + cur->data) / 2;
			}
			prev = cur;
			cur = cur->right;
		}
		else{
			pre = cur->left;
			while(pre->right != NULL and pre->right != cur){
				pre = pre->right;
			}
			if(pre->right == NULL){
				pre->right = cur;
				cur = cur->left;
			}
			else{
				pre->right = NULL;
				prev = pre;
				currentCount++;
				if(count % 2 != 0 and currentCount == (count + 1) / 2){
					return cur->data;
				}
				else if(count % 2 == 0 and currentCount == (count / 2) + 1){
					return (prev->data + cur->data) / 2;
				}
				prev = cur;
				cur = cur->right;
			}
		}
	}
	return count;
}
