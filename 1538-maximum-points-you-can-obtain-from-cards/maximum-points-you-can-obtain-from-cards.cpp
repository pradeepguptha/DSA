class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {

        int l = 0 , r = cardpoints.size()-1;
        
        int lsum = 0 , rsum = 0  ;
        for(int i  = 0 ; i < k ; i++) lsum+=cardpoints[i];
        int maxsum  = lsum;
        for (int i = k-1 ; i >=0  ; i--){
            lsum -= cardpoints[i];
            rsum += cardpoints[r--];
            maxsum = max(maxsum , lsum + rsum);
        }


        return maxsum;
        
    }
};