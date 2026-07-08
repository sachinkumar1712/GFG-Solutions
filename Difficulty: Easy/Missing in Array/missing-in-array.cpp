class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        int ans = 0;
         for(int i=0;i<n-1;i++){
            ans^=arr[i];
        }
        
        for(int i=1;i<=n;i++){
            ans^=i;
        }
       
        return ans;
    }
};