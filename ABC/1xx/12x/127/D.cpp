#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,i;
  int64_t s=0;
  cin >> N >> M;
  vector<int> A(N),D(0);
  vector<pair<int,int>> BC(M);

  for(i=0; i<N; i++)
    cin >> A.at(i);
  sort(A.begin(),A.end());

  for(i=0; i<M; i++)
    cin >> BC.at(i).second >> BC.at(i).first;
  sort(BC.begin(),BC.end());

  for(i=M-1; i>=0; ) {
    if(D.size() < N) {
      D.push_back(BC.at(i).first);
      if(--BC.at(i).second<=0)
        i--;
    } else
      break;
  }

  for(i=0; i<D.size(); i++) {
    if(D.at(i) >= A.at(i)) {
      A.at(i) = D.at(i);
      continue;
    }
    break;
  }

  for(int n : A)
    s += n;

  cout << s << endl;
}
