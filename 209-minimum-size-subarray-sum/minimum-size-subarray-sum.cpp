class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int l = 0, r = 0;
        int wsum = 0;
        int minlen = INT_MAX;

        while (r < n) {

            wsum += nums[r];

            while (wsum >= target) {
                int len = r - l + 1;
                minlen = min(minlen, len);

                wsum -= nums[l];
                l++;
            }

            r++;
        }

        return minlen !=INT_MAX ? minlen:0;
    }
};