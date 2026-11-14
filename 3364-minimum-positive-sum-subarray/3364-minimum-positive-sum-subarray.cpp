class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = INT_MAX;

        for (int len = l; len <= r; len++) {
            
            for (int i = 0; i + len <= n; i++) {
                int sum = 0;

                for (int j = i; j < i + len; j++) {
                    sum += nums[j];
                }

                if (sum > 0) {
                    ans = min(ans, sum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};