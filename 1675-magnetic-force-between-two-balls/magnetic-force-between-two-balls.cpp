class Solution {
public:
    bool isvalid(vector <int> &arr , int m , int mid, int n ){
        int ball = 1 , pos = arr[0];
        for(int i = 1 ; i < n ; i++ ){
            if ( arr[i] - pos >=mid){
                ball++;
                pos = arr[i];
            }
            if( ball == m) return true;
        
            }
        
        return false;



    }
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int n = arr.size(),ans =-1 ;
        int st = 1 , end = arr[n-1]-arr[0] ;
        while ( st <= end){
            int mid = st + (end-st)/2;

            if(isvalid(arr , m , mid,  n )){
                ans = mid ;
                st = mid+1;
            }
            else {
                end = mid -1;
            }
        }
        return ans;
        
    }
};