class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int st = 0;
        int end = 0;

        for (int x : nums) {
            st = max(st, x);
            end += x;
        }

        while (st <= end) {
            int mid = st + (end - st) / 2;

            int day = 1;
            int load = 0;

            for (int x : nums) {
                if (load + x > mid) {
                    day++;
                    load = 0;
                }

                load += x;
            }

            if (day <= days) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return st;
    }
};