#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,m=0;
  cin >> N;
  vector<int> A(N), B(N);

  cin >> A.at(0);
  for(i=1; i<N; i++) {
    cin >> A.at(i);
    A.at(i) += A.at(i-1);
  }

  for(i=0; i<N; i++)
    cin >> B.at(i);
  for(i=N-2; i>=0; i--)
    B.at(i) += B.at(i+1);

  for(i=0; i<N; i++)
    m = max(m, A.at(i)+B.at(i));
  cout << m << endl;
}
