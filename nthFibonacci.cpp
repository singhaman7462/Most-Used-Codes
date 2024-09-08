long long int fib(long long int n){
      if(n<=1)
      return n;
      return fib(n-1)+fib(n-2);
  }
    long long int fibmem(long long int n,vector<long long int> &dp){
      if(n<=1)
      return n;
      if(dp[n]!=-1)
      return dp[n];
      dp[n]= (fibmem(n-1,dp)%1000000007+fibmem(n-2,dp)%1000000007)%1000000007;
      return dp[n];
  }

    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> dp(n+1,-1);
        long long int ans=fibmem(n,dp);
        return ans;
    }