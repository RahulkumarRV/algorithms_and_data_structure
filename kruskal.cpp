#include<bits/stdc++.h>
using namespace std;

#define edge pair<int, int>

class Graph{
	private:
	   vector<pair<int, edge> >G;
	   vector<pair<int, edge>> T;
	   int *parent;
	   int V;
	   vector<pair<int, int>> subset;
	public:
	   Graph(int V);
	   void AddWeightedEdge(int u, int v, int w);
	   int find_set(int i);
	   void union_set(int u, int v);
	   void kruskal();
	   void print();
};

Graph::Graph(int v){
	V = v;
	parent = new int[v];
	for(int i=0; i<v; i++){
		parent[i] = i;
	}
	G.clear();
	T.clear();
}

void Graph::AddWeightedEdge(int u, int v, int w){
	G.push_back(make_pair(w, edge(u, v)));
}

int Graph::find_set(int i){
	if(subset[i].first != i){
		subset[i].first = find_set(subset[i].first);
	}
	return subset[i].first;
}

void Graph::union_set(int u, int v){
	if(subset[u].second < subset[v].second){
		subset[u].first = subset[v].first;
	}else if(subset[u].second > subset[v].second){
		subset[v].first = subset[u].first;
	}else{
		subset[v].first = subset[u].first;
		subset[u].second++;
	}
}
void Graph::kruskal(){
	int i, uRep, vRep;
	sort(G.begin(), G.end());
	for(int i=0; i<V; i++){
		subset.push_back(make_pair(i ,0));
	}
	for(int i=0; i<G.size(); i++){
		uRep = find_set(G[i].second.first);
		vRep = find_set(G[i].second.second);
		if(uRep != vRep){
			T.push_back(G[i]);
			union_set(uRep, vRep);
		}
	}
}

void Graph::print(){
	cout<<"edge :"
	<<" weight"<<endl;
	for(int i=0 ; i<T.size(); i++){
		cout<<T[i].second.first << " - "
		<<T[i].second.second<<" : "<<T[i].first<<endl;
	}
}


int main(){
	Graph g(4);
  g.AddWeightedEdge( 0, 1,10);
  g.AddWeightedEdge( 0, 2,6);
  g.AddWeightedEdge( 0, 3,5);
  g.AddWeightedEdge( 1, 3,15);
  g.AddWeightedEdge( 2, 3,4);
  /* g.AddWeightedEdge(2, 1, 2);
  g.AddWeightedEdge(2, 3, 3);
  g.AddWeightedEdge(2, 5, 2);
  g.AddWeightedEdge(2, 4, 4);
  g.AddWeightedEdge(3, 2, 3);
  g.AddWeightedEdge(3, 4, 3);
  g.AddWeightedEdge(4, 2, 4);
  g.AddWeightedEdge(4, 3, 3);
  g.AddWeightedEdge(5, 2, 2);
  g.AddWeightedEdge(5, 4, 3); */
  g.kruskal();
  g.print();
  return 0;
}


























