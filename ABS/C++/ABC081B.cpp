#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, i, c=0;
  cin >> N;
  vector<int> A(N);
  for(i=0; i<N; i++)
    cin >> A.at(i);

  while(1) {
    for(int &x:A) {
      if(x%2 != 0) {
        cout << c << endl;
        return 0;
      }
      x /= 2;
    }
    c++;
  }
}
