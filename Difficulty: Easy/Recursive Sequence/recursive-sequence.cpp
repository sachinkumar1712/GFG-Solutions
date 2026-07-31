class Solution {
  public:
    int sequence(int n) {
        // code here
        long long m = 1000000007;
        long long ans = 0;
        long long num = 1;
        for(int i=1;i<=n;i++){
            long long product = 1;
            for(int j=1;j<=i;j++){
                product=(product*num)%m;
                num++;
            }
            ans=(ans+product)%m;
        }
        return ans;
    }
};