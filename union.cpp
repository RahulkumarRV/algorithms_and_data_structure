int doUnion(int a[], int n, int b[], int m)  {
        sort(a, a+n);
        sort(b, b+m);
        int i , j , count = 0;
        i = j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]){
                while(i < n && a[i] == a[i+1]) i++;
                while(j < m && b[j] == b[j+1]) j++;
                i++, j++, count++;
            }
            else if(a[i] < b[j]){
                while(i < n && a[i] == a[i+1]) i++;
                i++ , count++;
            }
            else if(a[i] > b[j]){
                while(j < m && b[j] == b[j+1]) j++;
                j++, count++;
            }
        }
        while(i < n){
            if(a[i] != a[i-1]){
               count++;
            }
            i++;
        }
        while(j < m){
            if(b[j] != b[j-1]){
                count++;
            }
            j++;
        }
        return count;
    }
