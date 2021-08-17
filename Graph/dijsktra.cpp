#include<bits/stdc++.h>

using namespace std;
const int V = 9;

int minVIndex(int dist[], bool sptset[]){
	int minV = INT_MAX, minIndex = -1;
	for(int i=0; i<V; i++){
		if(!sptset[i] and dist[i] < minV){
			minV = dist[i], minIndex = i;
		}
	}
	return minIndex;
}

void  dijekstra(int graph[V][V], int src)
{
	int dist[V];
	bool sptset[V];
	
	for(int i=0; i<V; i++){
		dist[i] = INT_MAX, sptset[i] = false;
	}
	dist[src] = 0;
	
	for(int c = 0; c <V-1; c++){
		int sindex = minVIndex(dist, sptset);
		
		sptset[sindex] = true;
		for(int v=0; v<V; v++){
			if(sptset[v] == false and graph[sindex][v] and dist[v] != INT_MAX and dist[sindex] + graph[sindex][v] < dist[v]){
				dist[v] = dist[sindex] + graph[sindex][v];
			}
		}
	}
}

int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	dijekstra(graph, 0);
	return 0;
}#include<bits/stdc++.h>

using namespace std;
const int V = 9;

int minVIndex(int dist[], bool sptset[]){
	int minV = INT_MAX, minIndex = -1;
	for(int i=0; i<V; i++){
		if(!sptset[i] and dist[i] < minV){
			minV = dist[i], minIndex = i;
		}
	}
	return minIndex;
}

void  dijekstra(int graph[V][V], int src)
{
	int dist[V];
	bool sptset[V];
	
	for(int i=0; i<V; i++){
		dist[i] = INT_MAX, sptset[i] = false;
	}
	dist[src] = 0;
	
	for(int c = 0; c <V-1; c++){
		int sindex = minVIndex(dist, sptset);
		
		sptset[sindex] = true;
		for(int v=0; v<V; v++){
			if(sptset[v] == false and graph[sindex][v] and dist[v] != INT_MAX and dist[sindex] + graph[sindex][v] < dist[v]){
				dist[v] = dist[sindex] + graph[sindex][v];
			}
		}
	}
}

int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	dijekstra(graph, 0);
	return 0;
}#include<bits/stdc++.h>

using namespace std;
const int V = 9;

int minVIndex(int dist[], bool sptset[]){
	int minV = INT_MAX, minIndex = -1;
	for(int i=0; i<V; i++){
		if(!sptset[i] and dist[i] < minV){
			minV = dist[i], minIndex = i;
		}
	}
	return minIndex;
}

void  dijekstra(int graph[V][V], int src)
{
	int dist[V];
	bool sptset[V];
	
	for(int i=0; i<V; i++){
		dist[i] = INT_MAX, sptset[i] = false;
	}
	dist[src] = 0;
	
	for(int c = 0; c <V-1; c++){
		int sindex = minVIndex(dist, sptset);
		
		sptset[sindex] = true;
		for(int v=0; v<V; v++){
			if(sptset[v] == false and graph[sindex][v] and dist[v] != INT_MAX and dist[sindex] + graph[sindex][v] < dist[v]){
				dist[v] = dist[sindex] + graph[sindex][v];
			}
		}
	}
}

int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
	dijekstra(graph, 0);
	return 0;
}
