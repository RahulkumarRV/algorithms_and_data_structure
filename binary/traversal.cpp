#include<bits/stdc++.h>

using namespace std;

typedef struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
	
	
}Node;

void inOrderTraversal(Node* root){
	if(root == NULL){
		return ;
	}
	
	inOrderTraversal(root->left);
	cout<<root->data<<" ";
	inOrderTraversal(root->right);
}

void mirrorTheTree(Node* root, Node** mirror){
	if(root ==  NULL){
		mirror = NULL;
		return ;
	}
	*mirror = new Node(root->data);
	mirrorTheTree(root->left, &((*mirror)->right));
	mirrorTheTree(root->right, &((*mirror)->left));
	
}

void preOrderRec(Node* root){
	if(root == NULL) return ;
	cout<< root->data<< " ";
	preOrderRec(root->left);
	preOrderRec(root->right);
}

void inorderIterative(Node* root){
	stack<Node*> st;
	Node* cur = root;
	
	while(!st.empty() or cur != NULL){
		if(cur != NULL){
			st.push(cur);
			cur = cur->left;
		}
		else{
			cur = st.top();
			st.pop();
			cout<<cur->data<< " ";
			cur = cur->right;
		}
	}
	
}

void preOrderItr(Node* root){
	stack<Node*> st;
	
	Node* cur = root;
	while(!st.empty() or cur != NULL){
		
		if(cur != NULL){
			st.push(cur);
			cout<< cur->data << " ";
			cur = cur->left;
		}
		else{
			cur = st.top();
			st.pop();
			cur = cur->right;
		}
	}
}

void postOrderItr(Node* root){
	stack<Node*> st;
	st.push(root);
	stack<int> out;
	
	while(!st.empty()){
		
		Node* cur = st.top();
		st.pop();
		out.push(cur->data);
		if(cur->left){
			st.push(cur->left);
		}
		if(cur->right){
			st.push(cur->right);
		}
	}
	while(!out.empty()){
		cout<< out.top() << " ";
		out.pop();
	}
}

void postOrderRec(Node* root){
	if(root == NULL){
		return ;
	}
	postOrderRec(root->left);
	postOrderRec(root->right);
	cout<< root->data << " "; 
}
int main(){
	
	Node* root = new Node(5);
	root->left = new Node(3);
	root->right = new Node(6);
	root->left->left = new Node(2);
	root->left->right = new Node(4);
	cout<<"postorder itr : ";
	postOrderItr(root);
	cout<<"\npostorder itr : ";
	postOrderRec(root);
	
	return 0;
}
