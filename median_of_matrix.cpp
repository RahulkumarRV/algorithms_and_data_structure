int median_of_matrix(vector<vector<int>> &m, int r, int c){
  int min_, max_;
	min_ = INT_MAX, max_ = INT_MIN;
	for(int i=0; i<r; i++){
		min_ = min(min_, arr[i][0]);
		max_ = max(max_, arr[i][c-1]);
	}
	int median_palce = (r*c + 1) / 2;
	
	while(min_ < max_){
		int mid = min_ + (max_ - min_) / 2;
		int lesser_elements = 0;
		for(int i=0; i<r; i++){
			lesser_elements += upper_bound(m[i].begin(), m[i].begin() + c, mid) - m[i].begin();
		}
		if(lesser_elements < median_place){
			min_ = mid + 1;
		}
		else {
			max_ = mid;
		}
	}
	reutrn min_;
}
