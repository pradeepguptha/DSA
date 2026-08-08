class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int n = m.size() ;
        int mi = m[0].size();
        vector <int> ans;
        int sr = 0 , sc = 0 , ec = mi-1 , er = n-1;
        while(sr <= er && sc <= ec){
            for( int j = sc ; j <= ec ; j++){
                ans.push_back(m[sr][j]);
            }
            for( int j = sr+1 ; j <= er ; j++){
                ans.push_back(m[j][ec]);
            }
            for( int j = ec -1 ; j >= sc ; j--){
                if(er == sr) break;
                ans.push_back(m[er][j]);
            }
            for( int j = er-1 ; j >= sr+1 ; j--){
                if(ec == sc) break;
                ans.push_back(m[j][sc]);
            }
            sr++ , sc++ , ec--,er--;
        }
        return ans;

        
    }
};