int FindMaxSum(int arr[], int n)
    {
        int in, out;
        in = arr[0], out = 0;
        for(int i=1; i<n; i++){
            int temp = in;
            in = max(out + arr[i], in);
            out = temp;
        }
        return in;
    }

//dynamic programming solution
int FindMaxSum(int arr[], int n)
    {
        int v[n] = {0};
        v[0] = arr[0];
        v[1] = max(arr[0], arr[1]);
        for(int i=2; i<n; i++){
            v[i] = max(v[i - 2] + arr[i], v[i - 1]);
        }
        return v[n-1];
    }
