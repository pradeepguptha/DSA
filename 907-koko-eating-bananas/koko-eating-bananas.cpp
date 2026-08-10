class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max1 = *max_element(piles.begin(), piles.end());
        

        int st = 1 , end = max1;
        long long int tsum = 0 ;
        int ans = 0 ;
        
        
        while(st <= end){
            long long int mid = st + (end - st)/2;

            for(int val : piles){
            tsum += (val + mid -1)/mid;
        }
        if(tsum > h){
            st = mid+1;
        }
        else if (tsum <= h){
            ans = mid ;
            end = mid -1;
        }
        tsum = 0 ;


            


        


            

            
        }
        return ans;
        
        

        
    }
};