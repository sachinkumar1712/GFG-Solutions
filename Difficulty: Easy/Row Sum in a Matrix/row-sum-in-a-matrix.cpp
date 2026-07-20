class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        int m = mat.size();
        int n = mat[0].size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
            ans.push_back(sum);
            sum = 0;
        }
        return ans;
    }
};
