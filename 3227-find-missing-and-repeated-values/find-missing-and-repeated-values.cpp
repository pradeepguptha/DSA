class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;

        int n = grid.size();
        int sum1 = 0;
        int repeated = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int x = grid[i][j];

                if(s.find(x) != s.end()) {
                    repeated = x;
                }
                else {
                    s.insert(x);
                    sum1 += x;
                }
            }
        }

        int total = n * n;
        int expected = total * (total + 1) / 2;

        int missing = expected - sum1;

        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};