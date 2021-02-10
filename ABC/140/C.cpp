#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,s=0;
  cin >> N;
  vector<int> B(N-1);
  for(i=0; i<N-1; i++)
    cin >> B.at(i);

  s = B.at(0) + B.at(N-2);
  for(i=0; i<N-2; i++)
    if(B.at(i) < B.at(i+1))
      s += B.at(i);
    else
      s += B.at(i+1);

  cout << s << endl;
}
