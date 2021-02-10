#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i;
  cin >> N;
  vector<int> A(N), B(N);

  for(i=0; i<N; i++) {
    cin >> A.at(i);
    B.at(A.at(i)-1) = i+1;
  }

  for(i=0; i<N; i++)
    cout << B.at(i) << " ";
  cout << endl;
}
