#include<bits/stdc++.h>

using namespace std;
#define V 

vector<int> adj[V];


void  DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<int> &bridges){
	static int time = 0;
	disc[u] = low[u] = time;
	time += 1;
	
	for(int i : adj[u]){
		if(disc[i] == -1){
			parent[i] = u;
			DFS(i, disc, low, parent, bridges);
			low[u] = min(low[u], low[i]);
			if(low[i] > disc[u]){
				bridges.push_back({u, i});
			}
		}
		else if(i != parent[u]){
			low[u] = min(low[u], disc[v]);
		}
	}
}

void findBridges_Tarjan(){
	vector<int> disc(V, -1), low(V, -1), part(V, -1);
	vector<pair<int, int>> bridges;
	for(int i=0; i<V; i++){
		if(disc[i] == -1){
			DFS(i, disc, low, part, bridges);
		}
	}
	cout<< "Bridges are : \n";
	for(int i=0; i<bridges.size(); i++){
		cout<< bridges[i].first<< " ---> " << bridges[i].second<<endl;
	}
}

int main(){
	
	adj[0].push_back(2);
	adj[2].push_back(0);
	adj[0].push_back(3);
	adj[3].push_back(0);
	adj[1].push_back(0);
	adj[0].push_back(1);
	adj[2].push_back(1);
	adj[1].push_back(2);
	adj[3].push_back(4);
	adj[4].push_back(3);
	findBridges_Tarjan();
	
	return 0;
}
