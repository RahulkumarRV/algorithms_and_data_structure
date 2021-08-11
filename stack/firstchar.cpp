#include<bits/stdc++.h>
#define MAXSIZE 256
using namespace std;

struct Node{
    char x;
    Node* next;
    Node* prev;
    Node(char x){
        this->x = x;
        next = NULL;
        prev = NULL;
    }
};

void addLast(Node** head, Node** tail, char x){
    Node *newNode = new Node(x);
    if((*head) == NULL){
        (*head) = (*tail) = newNode;
        return ;
    }
    else{
        (*tail)->next = newNode;
        newNode->prev = (*tail);
        (*tail) = newNode;
    }
}

void remove(Node** head, Node** tail, Node* node){
    if(head == NULL){
        return ;
    }
    if((*head) == node){
        (*head) = (*head)->next;
        
    }
    if((*tail) == node){
        (*tail) = (*tail)->prev;
    }
    if(node->next != NULL){
        node->next->prev = node->prev;
    }
    if(node->prev != NULL){
        node->prev->next = node->next;
    }
    delete(node);
}

void findFirstNonRepetingChar(string s){
    Node* inDLL[MAXSIZE];
    bool repeting[MAXSIZE];
    for(int i=0; i<MAXSIZE; i++){
        inDLL[i] = NULL;
        repeting[i] = false;
    }
    
    Node* head = NULL, *tail = NULL;
    for(int i=0; i<s.size(); i++){
        char x = s[i];
        if(!repeting[x]){
            if(inDLL[x] == NULL){
                addLast(&head, &tail, x);
                inDLL[x] = tail;
            }
            else{
                remove(&head, &tail, inDLL[x]);
                inDLL[x] = NULL;
                repeting[x] = true;
            }
        }
    }
    if(head != NULL){
        cout<< " Node is "<<head->x;
    }else{
        cout<< "Node not present";
    }

}

int main(){
    string s = "greeksforgreeks";
    findFirstNonRepetingChar(s);
    
    return 0;
}
