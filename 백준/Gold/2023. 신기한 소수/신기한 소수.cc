#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
  if (n == 2) return true;
  for (int i = 3; i <= sqrt(n); i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

void dfs(int p, int N) {
  if (N == 0) {
    cout << p << '\n';
    return;
  }
  for (int i = 1; i < 10; i += 2) {
    int temp_p = p * 10 + i;
    if (is_prime(temp_p)) dfs(temp_p, N - 1);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  int start_prime[] = {2, 3, 5, 7};
  for (int p : start_prime) {
    dfs(p, N - 1);
  }
  return 0;
}