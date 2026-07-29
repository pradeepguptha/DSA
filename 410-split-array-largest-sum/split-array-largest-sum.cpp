class Solution {
public:

    bool isvalid(vector<int>& arr, int k , int mid,int count,int n ){
   
        int splits = 1  , indexsum = 0;
        for (int  i =0 ;i < n;i++ ){
            if(arr[i]>mid) return false;
            if(indexsum+arr[i]<=mid){
                indexsum+=arr[i];
            }
            else {
                splits++;
                indexsum=arr[i];            }
        }
        return k>=splits ? true : false;

    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0 , count = 0;
        for(int val : nums){
            sum+=val;
            count ++;
        }
        if(count < k) return -1;
        int st = 0 , end = sum, ans=-1;
        while(st<= end ){
            int mid = st + (end-st)/2;

            if(isvalid(nums,  k , mid,count, n )){
                end = mid-1;
                ans = mid;
            }
            else {
                st = mid+1;
            }
        }
        

    return ans;   
    }
};