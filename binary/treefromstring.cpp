int findIndex(string str, int si, int ei){
	if(si > ei){
		return -1;
	}
	
	stack<char> st;
	for(int i=si; i<=ei; i++){
		if(str[i] == '('){
			st.push('(');
		}
		else if(str[i] == ')'){
			if(st.top() == '('){
				st.pop();
				if(st.empty()){
					return i;
				}
			}
			
		}
	}
	return -1;
}

Node* treeFromString(string str, int si, int ei){
	if(si > ei){
		return NULL;
	}
	
	Node* root = new Node(str[si] - '0');
	int index = -1;
	
	if(si+1 <= ei && str[si + 1] ==  '('){
		index = findIndex(str, si+1, ei);
	}
	
	if(index != -1){
		root->left = treeFromString(str, si+2, index - 1);
		
		root->right = treeFromString(str, index + 2, ei - 1);
	}
	return root;
}

int main(){
	
	string str = "4(2(3)(1))(6(5))";
	Node* root = treeFromString(str, 0, str.length() - 1);
	preOrderRec(root);
	return 0;
}
