#include <bits/stdc++.h>
using namespace std;

int dp[191'230];

int solve(int num) {
  if (dp[num] == -1)
    return dp[num] = (solve(num - 1) + solve(num - 2)) % 1'000'000'007;
  return dp[num];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  fill(dp, dp + 191'230, -1);
  dp[0] = dp[1] = 1;

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    cout << solve(N) << '\n';
  }
  return 0;
}