#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,s=0;
  cin >> N;
  vector<int> A(N), B(N), C(N-1);
  for(i=0; i<N; i++)
    cin >> A.at(i);
  for(i=0; i<N; i++)
    cin >> B.at(i);
  for(i=0; i<N-1; i++)
    cin >> C.at(i);

  for(i=0; i<N; i++) {
    s += B.at(A.at(i)-1);
    if(i!=0 && A.at(i-1)+1==A.at(i))
      s += C.at(A.at(i-1)-1);
  }

  cout << s << endl;
}
