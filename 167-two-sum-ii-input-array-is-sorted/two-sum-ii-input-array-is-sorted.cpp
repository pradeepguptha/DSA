class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int end = numbers.size()-1;
        int st = 0 ;
        while(st < end){
            int curr_sum = numbers[st]+numbers[end];
            if (curr_sum == target){
                return {st+1,end+1};
            }
            else if (target < curr_sum){
                end--;
            }
            else if ( curr_sum < target){
                st++;

            }
           
           
            
        }
        return {};
        
    }

    
};