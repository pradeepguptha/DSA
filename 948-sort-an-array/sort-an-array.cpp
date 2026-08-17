class Solution {
public:
    void merge(vector<int>& nums, int st, int mid, int end) {
        int lt = mid - st + 1;
        int rt = end - mid;

        vector<int> left(lt);
        vector<int> right(rt);
        vector<int> temp;

        for (int i = 0; i < lt; i++) {
            left[i] = nums[st + i];
        }

        for (int j = 0; j < rt; j++) {
            right[j] = nums[mid + 1 + j];
        }

        int i = 0;
        int j = 0;
        int k = st;

        while (i < lt && j < rt) {
            if (left[i] <= right[j]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[j++];
            }
        }

        while (i < lt) {
            nums[k++] = left[i++];
        }

        while (j < rt) {
            nums[k++] = right[j++];
        }
    }

    void mergesort(vector<int>& nums, int st, int end) {
        if (st < end) {
            int mid = st + (end - st) / 2;

            mergesort(nums, st, mid);
            mergesort(nums, mid + 1, end);

            merge(nums, st, mid, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;

        mergesort(nums, st, end);

        return nums;
    }
};