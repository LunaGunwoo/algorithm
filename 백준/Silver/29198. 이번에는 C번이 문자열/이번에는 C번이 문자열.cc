#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, K;
  string s[301];
  cin >> N >> M >> K;
  for (int i = 0; i < N; i++) cin >> s[i];
  sort(s, s + N);

  vector<char> v(K * M);
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < M; j++) v[i * M + j] = s[i][j];
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
  return 0;
}