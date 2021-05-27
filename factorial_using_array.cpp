class Solution {
public:
    vector<int> factorial(int n){
        vector<int> result;
        result.push_back(1);
        while(n){
            int value = n;
            int carry = 0;
            int index = result.size();
            while(index > 0){
                index = index - 1;
                int u = result[index];
                result[index] = ((u * value) + carry) % 10;
                carry = (u * value + carry) / 10;
                
            }
            while(carry){
                result.insert(result.begin(),carry  % 10);
                carry = carry / 10;
            }
            n--;
            
        }
        return result;
    }
};
