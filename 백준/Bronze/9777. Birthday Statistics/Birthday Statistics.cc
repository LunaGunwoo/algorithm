#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  int cnt[13];
  fill(cnt, cnt + 13, 0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    int id;
    cin >> id;

    string s, temp;
    cin >> s;
    stringstream ss(s);
    for (int i = 0; i < 3; i++) {
      getline(ss, temp, '/');
      if (i == 1) {
        cnt[stoi(temp)]++;
      }
    }
  }
  for (int i = 1; i <= 12; i++) {
    cout << i << ' ' << cnt[i] << '\n';
  }
  return 0;
}