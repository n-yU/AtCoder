#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll> Q(0);

bool isOK(int idx, int k) {
  if(Q.at(idx)>=k)
    return true;
  else
    return false;
}

int binary_search(int k) {
  int l=-1, r=Q.size();
  while(r-l>1) {
    int m=l+(r-l)/2;
    if(isOK(m,k))
      r=m;
    else
      l=m;
  }
  return Q.at(l);
}

int main() {
  int N,i,j,r,rx=0;
  ll M;
  cin >> N >> M;
  vector<ll> P(N+1);
  P.at(0)=0;
  for(i=1; i<=N; i++)
    cin >> P.at(i);
  sort(P.begin(),P.end());

  for(i=0; i<=N; i++) {
    for(j=0; j<=N; j++) {
      if(P.at(i)+P.at(j)>M)
        break;
      Q.push_back(P.at(i)+P.at(j));
    }
    if(P.at(i)>M)
      break;
  }

  sort(Q.begin(),Q.end());
  for(i=0; i<Q.size(); i++) {
    int r=binary_search(M-Q.at(i));
    if(r+Q.at(i)==M) {
      rx=M;
      break;
    }
    if(r+Q.at(i)>rx)
      rx=r+Q.at(i);
  }

  cout << rx << endl;
}
