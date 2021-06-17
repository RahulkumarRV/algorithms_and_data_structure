int minSwaps(vector<int>&nums)
	{
	    pair<int, int> map[nums.size()];
	    for(int i=0; i<nums.size(); i++){
	        map[i].first = nums[i];
	        map[i].second = i;
	    }
	    int swapcount = 0;
	    sort(map, map + nums.size());
	    
	    vector<bool> visited(nums.size(), false);
	    for(int i=0; i<nums.size(); i++){
	        if(visited[i] || map[i].second == i){
	            continue;
	        }
	        
	        int cycle_count = 0;
	        int j = i;
	        while(!visited[j]){
	            visited[j] = true;
	            j = map[j].second;
	            cycle_count++;
	        }
	        
	        if(cycle_count > 0){
	            swapcount += cycle_count - 1;
	        }
	        
	    }
	    
	    return swapcount;
	    
	}
