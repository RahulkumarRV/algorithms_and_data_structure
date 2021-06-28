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

int main(){
	
	Node* root = new Node(5);
	root->left = new Node(3);
	root->right = new Node(6);
	root->left->left = new Node(2);
	root->left->right = new Node(4);
	cout<< "Inorder traversal : ";
	inOrderTraversal(root);
	Node* mirror = NULL;
	mirrorTheTree(root, &mirror);
	cout<< "Inorder traversal : ";
	inOrderTraversal(mirror);
	return 0;
}
