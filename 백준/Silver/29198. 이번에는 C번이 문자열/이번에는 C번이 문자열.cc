#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, K;
  string s[301];
  cin >> N >> M >> K;
  for (int i = 0; i < N; i++) {
    cin >> s[i];
    sort(s[i].begin(), s[i].end());
  }
  sort(s, s + N);

  int cnt[26];
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < M; j++) cnt[s[i][j] - 'A']++;
  }

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < cnt[i]; j++) {
      cout << (char)('A' + i);
    }
  }
  return 0;
}