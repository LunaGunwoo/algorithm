#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, M, K, S;
  string sentence;
  unordered_map<char, bool> map;
  cin >> N;
  for (int i = 0; i < N; i++) {
    char ch;
    cin >> ch;
    map[ch] = true;
  }
  cin >> M;
  for (int i = 0; i < M; i++) {
    char ch;
    cin >> ch;
    map[ch] = true;
  }
  cin >> K;
  for (int i = 0; i < K; i++) {
    char ch;
    cin >> ch;
    map[ch] = false;
  }
  cin >> S;
  cin.ignore();
  getline(cin, sentence);

  bool flag = true;
  for (int i = 0; i < S; i++) {
    char ch = sentence[i];
    if (ch != ' ' && (map.find(ch) == map.end() || map[ch] == false)) {
      cout << ch;
      flag = false;
    } else {
      if (!flag) cout << '\n';
      flag = true;
    }
  }
  return 0;
}