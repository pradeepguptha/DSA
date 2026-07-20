class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 ;
        int curr_max = INT_MIN;
        for (int val : nums){
            sum += val;
            curr_max = max(curr_max,sum);

            if (sum < 0) 
            sum = 0 ;
        }
        return curr_max;
        
    }
    
};
