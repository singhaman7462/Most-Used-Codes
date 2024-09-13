long long int counts(int coins[], int n, int sum){
      if(sum==0)
      return 1;
      if(sum<0)
      return 0;
      if(n<=0)
      return 0;
      
      return counts(coins, n - 1, sum) + counts(coins, n, sum - coins[n - 1]);
  }