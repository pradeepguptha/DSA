class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = height.size();
        int lp = 0 , rp = l-1;
        int maxwater = 0 ;
        while (lp < rp ){
            int w = rp - lp ;
            int h = min(height[lp],height[rp]);
            int area = w * h ;
            maxwater = max(maxwater , area );

            height[rp] > height[lp] ? lp++ : rp--;
        }
        return  maxwater;
    }
    
        
    
};