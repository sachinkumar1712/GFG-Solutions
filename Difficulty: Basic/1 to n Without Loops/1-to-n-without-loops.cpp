class Solution {
  public:
    void printTillN(int n) {
        // code here
        vector<int>ans;
        if(n==0) return;
        printTillN(n-1);
        cout<<n<<" ";
    }
};