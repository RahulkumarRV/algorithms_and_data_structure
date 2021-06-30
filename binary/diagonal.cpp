void digonaluntil(Node* root, int d, map<int , vector<int>> &m){
	if(!root){
		return ;
	}
	
	m[d].push_back(root->data);
	digonaluntil(root->left, d+1, m);
	digonaluntil(root->right, d, m);
	
	
	
}

void printDigonal(Node* root){
	
	map<int, vector<int>> m;
	digonaluntil(root, 0, m);
	
	cout<< " digonal traversal : \n";
	for(auto it : m){
		vector<int> v = it.second;
		for(int i=0; i<v.size(); i++){
			cout<< v[i] << " ";
		}
		cout<< endl;
		
	}
}
