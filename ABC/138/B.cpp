#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i;
  double a,s=0;
  cin >> N;
  for(i=0; i<N; i++) {
    cin >> a;
    s += 1.0/a;
  }
  cout << setprecision(16) << 1.0/s << endl;
}
