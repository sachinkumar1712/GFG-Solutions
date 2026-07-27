class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        long long ans = 0;
        int temp = n;
        while(temp!=0){
            int ld = temp%10;
            ans = ans+ld*ld*ld;
            temp/=10;
        }
        if(ans==n) return true;
        else return false;
    }
};