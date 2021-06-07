#include <bits/stdc++.h>
using namespace std;

#define N 4

void print(int arr[N][N])
{
	for(int i = 0; i < N; ++i)
	{
		for(int j = 0; j < N; ++j)
			cout << arr[i][j] << " ";
			
		cout << '\n';
	}
}

void rotate(int arr[N][N])
{
	
	// First rotation
	// with respect to Secondary diagonal
	for(int i = 0; i < N; i++)
	{
		for(int j = i; j < N; j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	//print(arr);
	// Second rotation
	// with respect to middle row
	for(int i=0; i<N; i++){
    	int l = 0;
      	int r = N - 1;
      	while(l < r){
        	int t = arr[i][l];
          	arr[i][l] = arr[i][r];
          	arr[i][r] = t;
          	l++, r--;
        }
    }
  //print(arr);
}

// Driver code
int main()
{
	int arr[N][N] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
	rotate(arr);
	print(arr);
	return 0;
}

// This code is contributed by Rahul Verma
