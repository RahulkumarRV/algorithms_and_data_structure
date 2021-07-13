#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

string findItsSubtee(Node* root){
	if(root == NULL){
		return "";
	}
	string s = "";
	s += to_string(root->data);
	s += findItsSubtee(root->left);
	s += findItsSubtee(root->right);
	return s;
}

bool findSubtree(Node* root){
	unordered_set<string> set;
	queue<Node*> que;
	que.push(root);
	while(!que.empty()){
		Node* node = que.front();
		que.pop();
		
			string subTreeExp = findItsSubtee(node);
			if(set.find(subTreeExp) != set.end()){
				return true;
			}
			else{
				set.insert(subTreeExp);
				cout<< subTreeExp<< endl;
			}
			if(node->left){
				que.push(node->left);
				
			}
			if(node->right){
				que.push(node->right);
			}
		
	}
	return false;
}


int main(){
	Node* root = new Node(0);
	root->left = new Node(1);
	root->right = new Node(2);
	root->right->left = new Node(1);
	cout<< findSubtree(root);
	return 0;
}
