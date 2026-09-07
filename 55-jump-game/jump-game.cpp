class Solution {
public:
    bool canJump(vector<int>& nums) { 
        int maxjump  = 0 ;
        int i = 0;
        while(i <= maxjump){
            if(maxjump >= nums.size()-1) return true ;
            maxjump = max(maxjump,  i + nums[i++]);
        }
        
       return false;
    }
};