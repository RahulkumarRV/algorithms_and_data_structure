#include<bits/stdc++.h>

using namespace std;
#define d 256

void search(char ptr[], char text[], int q){
	
	int M = strlen(ptr);
	int N = strlen(text);
	
	int i, j;
	int p = 0;
	int t = 0;
	int h = 1;
	for(i=0; i< M - 1; i++)
		h = (d * h ) % q;
	
	for(i=0; i<M; i++){
		p = (d * p + ptr[i]) % q;
		t = (d * t + text[i]) % q;
	}
	
	for(i=0; i<= N - M; i++){
		if(p == t){
			for(j=0; j<M; j++){
				if(ptr[j] != text[j+i]){
					break;
				}
			}
			if(j == M ){
				cout<< " pattren found at index = " << i << endl;
			}
		}
		
		if(i < N - M){
			t = (d * (t - text[i]*h) + text[i+M]) % q;
			
			if(t < 0){
				t = (t + q);
			}
		}
		
	}
}

int main(){
	
	char text[] = "GEEKS FOR GEEKS";
	char pat[] = "GEEK";
	
	int q = 101;
	search(pat, text, q);
	return 0;
	
}

//o(n+m) in best case, worst case o(nm)
