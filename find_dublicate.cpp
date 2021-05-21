class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};

//other way 
int findDuplicate(vector<int>& nums) {
    set<int> s;
    for(int i=0; i<nums.size(); i++){
        if(s.find(nums[i]) != s.end()){
            return nums[i];
        }
        s.insert(nums[i]);
    }
    return -1;
}

//other way
int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return fast;
    }
