int solve(int ind1, int ind2, string s, string t) {
  if (ind1 < 0 || ind2 < 0)
    return 0;
  else if (s[ind1] == t[ind2])
    return 1 + solve(ind1 - 1, ind2 - 1, s, t);
  else
    return max(solve(ind1 - 1, ind2, s, t), solve(ind1, ind2 - 1, s, t));
}

int solvemem(int ind1, int ind2, string s, string t, vector<vector<int>> &dp) {
  if (ind1 == 0 || ind2 == 0)
    return 0;
  else if (dp[ind1][ind2] != -1)
    return dp[ind1][ind2];
  else if (s[ind1 - 1] == t[ind2 - 1]) {
    dp[ind1][ind2] = 1 + solvemem(ind1 - 1, ind2 - 1, s, t, dp);
    return dp[ind1][ind2];
  } else {
    dp[ind1][ind2] = max(solvemem(ind1 - 1, ind2, s, t, dp),
                         solvemem(ind1, ind2 - 1, s, t, dp));
    return dp[ind1][ind2];
  }
}
int solvetab(string s, string t) {
  int ind1 = s.length();
  int ind2 = t.length();
  vector<vector<int>> dp(ind1 + 1, vector<int>(ind2 + 1, 0));
  for (int i = 0; i <= ind1; i++)
    dp[i][0] = 0;
  for (int i = 0; i <= ind2; i++)
    dp[0][i] = 0;
  for (int i = 1; i <= ind1; i++) {
    for (int j = 1; j <= ind2; j++) {
      if (s[i - 1] == t[j - 1]) 
        dp[i][j] = 1 + dp[i - 1][j - 1];
        else 
		dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  
  return dp[ind1][ind2];
}

int lcs(string s, string t) {
  // Write your code here
//   int ind1 = s.length();
//   int ind2 = t.length();
//   vector<vector<int>> dp(ind1 + 1, vector<int>(ind2 + 1, -1));
//   int ans = solvemem(ind1, ind2, s, t, dp);
int ans=solvetab(s,t);
  return ans;
}
