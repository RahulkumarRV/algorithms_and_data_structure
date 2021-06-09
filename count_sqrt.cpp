int countSquares(int N) {
        return ceil(sqrt(N)) - 1;
}

int countSquares(int N) {
  if(N == 0 && N == 1) return N;
    int count, v;
  count = v = 1;
  while(v < N){
    count++;
    v = count * count ;
    
  }
  return count - 1;
}

int countSquares(int N) {
  if(N == 1 && N == 0) return N;
  
  int l, r;
  l = 1, r = N;
  while(l <= r){
    int mid = (r + l)/2;
    if(mid * mid == N){
      return mid;
    }
    else if(mid <= N / mid){
      l = mid + 1;
      res = mid;
    }
    else{
      r = mid - 1;
    }
  }
  return l;
}
