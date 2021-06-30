vector <int> zigZagTraversal(Node* root)
{
	if(!root) return vector<int>();
	
	vector<int> res;
	queue<Node*> q;
	q.push(root);
	int j = 1;
	vector<int> ref;
	while(!q.empty()){
	    int size = q.size();
        int vsize = res.size();
	    for(int i=0; i<size; i++){
	        
	        Node* cur = q.front();
	        q.pop();
	        
	        if(j%2 == 1){
	            res.push_back(cur->data);
	        }
	        else{
	            res.insert(res.begin() + vsize, cur->data);
	        }
	        
	        if(cur->left != NULL){
	            q.push(cur->left);
	        }
	        if(cur->right != NULL){
	            q.push(cur->right);
	        }
	        
	    }
	    j++;
	}
	return res;
	
}
