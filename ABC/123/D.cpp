#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int X,Y,Z,K,i,j,n=0;
  cin >> X >> Y >> Z >> K;
  vector<ll> A(X),B(Y),C(Z),E(X*Y),F(min(X*Y,K)*Z);
  for(i=0; i<X; i++)
    cin >> A.at(i);
  for(i=0; i<Y; i++)
    cin >> B.at(i);
  for(i=0; i<Z; i++)
    cin >> C.at(i);

  for(i=0; i<X; i++)
    for(j=0; j<Y; j++)
      E.at(n++) = A.at(i)+B.at(j);
  sort(E.begin(), E.end(), greater<ll>());

  n=0;
  for(i=0; i<min(X*Y,K); i++)
    for(j=0; j<Z; j++)
      F.at(n++) = E.at(i)+C.at(j);
  sort(F.begin(), F.end(), greater<ll>());

  for(i=0; i<K; i++)
    cout << F.at(i) << endl;
}
