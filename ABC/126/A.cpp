#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K;
  string S;
  cin >> N >> K >> S;
  S.at(K-1) += 32;
  cout << S << endl;
}
