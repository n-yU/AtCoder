#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, i, sum=0;
  cin >> N >> A >> B;

  for(i=1; i<=N; i++) {
    int p=0;
    string s = to_string(i);
    for(char c : s)
      p += c-'0';
    if(p>=A && p<=B)
      sum += i;
  }

  cout << sum << endl;
}
