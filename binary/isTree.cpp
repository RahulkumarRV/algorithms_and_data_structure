#include<bits/stdc++.h>

using namespace std;

class Graph{
	private:
		int V;
		bool isCycleUtil(int v, int parent, bool visited[]);
		list<int> *adj;
	public:
		Graph(int v);
		void addEdge(int u, int v);
		bool isCycle();
};

Graph::Graph(int v){
	V = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool Graph::isCycleUtil(int v, int parent, bool visited[]){
	visited[v] = true;
	
	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i){
		if(!visited[*i]){
			if(isCycleUtil(*i, v, visited)){
				return true;
			}
		}
		else if(*i != parent){
			return true;
		}
	}
	return false;
}

bool Graph::isCycle(){
	bool *visited = new bool[V];
	for(int i=0; i<V; i++){
		visited[i] = false;
	}
	
	if(isCycleUtil(0, -1, visited)){
		return true;
	}
	
	for(int i=1; i<V; i++){
		if(!visited[i]){
			return true;
		}
	}
	return false;
}


int main(){
	Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCycle()?
       cout << "Graph contains cycle\n":
       cout << "Graph doesn't contain cycle\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCycle()?
       cout << "Graph contains cycle\n":
       cout << "Graph doesn't contain cycle\n";
	return 0;
}
