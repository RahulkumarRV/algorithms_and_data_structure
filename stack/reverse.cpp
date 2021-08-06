stack<int> st;

void insert_at_bottom(int a){
	if(st.empty()){
		st.push(a);
		return;
	}
	
	int d = st.top();
	st.pop();
	insert_at_bottom(a);
	st.push(d);
}

void reverse(){
	if(st.empty()){
		return ;
	}
	
	int d = st.top();
	st.pop();
	reverse();
	insert_at_bottom(d);
}
void printStack(){
	if(st.empty()){
		return ;
	}
	int d = st.top();
	st.pop();
	cout<<d<<" ";
	printStack();
	st.push(d);
	
}
int main(){
	
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int d;
		cin>>d;
		st.push(d);
	}
	printStack();
	int data;
	cout<<"\nInsert at bottom = ";
	cin>>data;
	insert_at_bottom(data);
	printStack();
	cout<<"Reverse stack\n";
	reverse();
	printStack();
	return 0;
}
