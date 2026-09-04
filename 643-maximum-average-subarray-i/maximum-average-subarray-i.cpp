class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0, r = k;
        long long sum = 0;

        for (int i = 0; i < r; i++) {
            sum += nums[i];
        }

        long long maxsum = sum;

        while (r < nums.size()) {
            sum -= nums[l++];
            sum += nums[r++];
            
            maxsum = max(maxsum, sum);
        }

        return (double)maxsum / k;
    }
};