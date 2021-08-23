#include<bits/stdc++.h>

using namespace std;


class Edge{
	public:
		int u, v, weight;
};

class Graph{
	public :
	int V, E;
	Edge* edge;
};

class subset{
	public:
		int parent, rank;
};

Graph* createGraph(int v, int e){
	Graph *graph = new Graph();
	graph->V = v;
	graph->E = e;
	graph->edge = new Edge[graph->E * sizeof(Edge)];
	
	return graph;
}

int find(vector<subset*> s, int i){
	if(s[i]->parent == i){
		return i;
	}
	
	return find(s, s[i]->parent);
}

void createUnion(vector<subset*> &s, int x, int y){
	if(s[x]->rank < s[y]->rank){
		s[x]->parent = y;
	}
	else if(s[y]->rank > s[x]->rank){
		s[y]->parent = x;
	}
	else{
		s[y]->parent = x;
		(s[x]->rank)++;
	}
}

int isCycle(Graph *graph){
	int v = graph->V, e = graph->E;
	
	vector<subset*> s(v);
	
	for(int i=0; i<v; i++){
		s[i] = new subset();
		s[i]->parent = i;
		s[i]->rank = 0;
	}
	
	for(int i=0; i<e; i++){
		int x = find(s, graph->edge[i].u);
		int y = find(s, graph->edge[i].v);
		if(x == y){
			return 1;
		}
		createUnion(s, x, y);
	}
	return 0;
}

int comp(const void *a, const void *b){
	Edge* a1 = (Edge*)a;
	Edge* b1 = (Edge*)b;
	return a1->weight > b1->weight;
}
void KruskalMST(Graph* graph){
	int V = graph->V;
	vector<Edge> res(V);
	int e = 0, i = 0;
	qsort(graph->edge, graph->E, sizeof(graph->edge[0]), comp);
	
	vector<subset*> s(V);
	for(int i=0; i<V; i++){
		s[i] = new subset();
		s[i]->parent = i;
		s[i]->rank = 0;
	}
	
	while(e < V - 1 and i < graph->E){
		Edge next_edge = graph->edge[i++];
		
		int x = find(s, next_edge.u);
		int y = find(s, next_edge.v);
		if(x != y){
			res[e++] = next_edge;
			createUnion(s, x, y);
		}
		
	}
	int mstcost = 0;
	for(int i=0; i<e; i++){
		cout<<res[i].u << " -- "<< res[i].v<< " = " <<res[i].weight<<endl;
		mstcost += res[i].weight;
	}
	
	cout<< "weight = " << mstcost<<endl;
	
}


int main(){
	int V = 4; // Number of vertices in graph
    int E = 5; // Number of edges in graph
    Graph* graph = createGraph(V, E);
 
    // add edge 0-1
    graph->edge[0].u = 0;
    graph->edge[0].v = 1;
    graph->edge[0].weight = 10;
 
    // add edge 0-2
    graph->edge[1].u = 0;
    graph->edge[1].v = 2;
    graph->edge[1].weight = 6;
 
    // add edge 0-3
    graph->edge[2].u = 0;
    graph->edge[2].v = 3;
    graph->edge[2].weight = 5;
 
    // add edge 1-3
    graph->edge[3].u = 1;
    graph->edge[3].v = 3;
    graph->edge[3].weight = 15;
 
    // add edge 2-3
    graph->edge[4].u = 2;
    graph->edge[4].v = 3;
    graph->edge[4].weight = 4;
 
   
    // Function call
    KruskalMST(graph);
}
