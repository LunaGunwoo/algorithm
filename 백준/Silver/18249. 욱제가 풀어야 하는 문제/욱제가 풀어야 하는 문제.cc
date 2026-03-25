#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int dp[191'230];
  fill(dp, dp + 191'230, -1);
  dp[0] = dp[1] = 1;
  for (int i = 2; i < 191'230; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % 1'000'000'007;

  int T;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    cout << dp[N] << '\n';
  }
  return 0;
}