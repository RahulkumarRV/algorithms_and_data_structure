#include<bits/stdc++.h>

using namespace std;
#define V 5

int minfind(int key[], bool mstset[]){
	int minIndex = -1, minValue = INT_MAX;
	
	for(int i=0; i<V; i++){
		if(minValue > key[i] and mstset[i] == false){
			minValue = key[i];
			minIndex = i;
		}
	}
	
	return minIndex;
}

void printMST(int parent[], int graph[V][V])
{
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
}

void primMST(int graph[V][V]){
	bool mstset[V];
	int key[V];
	int parent[V];
	
	parent[0] = -1;
	key[0] = 0;
	for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstset[i] = false;
	
	for(int i=0; i<V-1; i++){
		int u = minfind(key, mstset);
		
		mstset[u] = true;
		for(int i=0; i<V; i++){
			if(graph[u][i] and mstset[i] == false and graph[u][i] < key[i]){
				key[i] = graph[u][i];
				parent[i] = u;
			}
		}
	}
	printMST(parent, graph);
}

int main(){
	
	int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
 
    primMST(graph);
 
	
	return 0;
}
