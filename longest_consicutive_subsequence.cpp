int findLongestConseqSubseq(int arr[], int N)
    {
       set<int> set;
       for(int i=0; i<N; i++){
           set.insert(arr[i]);
       }
       int maximum = 1, count = 1;
       auto i = set.begin();
       int prev = *i;
       
       for(i++; i != set.end(); i++){
           
           if(abs(*i - prev) == 1){
               count++;
           }else{
               maximum = max(maximum, count);
               count = 1;
           }
           prev = *i;
       }
       maximum = max(maximum, count);
       return maximum;
    }
