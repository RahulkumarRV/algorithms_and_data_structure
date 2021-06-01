int PalinArray(int a[], int n)
{  
    while(n--){
        int v = a[n];
        int r = 0;
        while(v){
            r = r*10 + v%10;
            v /= 10;
        }
        if(a[n] != r){
            return 0;
        }
    }
    return 1;
}
