#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M,i,j,k,s,c=0;
  cin >> N >> M;
  vector<vector<int>> sw(M, vector<int>(0));
  vector<int> p(M);

  for(i=0; i<M; i++) {
    cin >> k;
    for(j=0; j<k; j++) {
      cin >> s;
      sw.at(i).push_back(s);
    }
  }

  for(i=0; i<M; i++)
    cin >> p.at(i);

  for(i=0; i<pow(2,N); i++) {
    stringstream ss;
    ss << bitset<10>(i);
    string b = ss.str();
    for(j=0; j<M; j++) {
      int sm=0;
      for(k=0; k<sw.at(j).size(); k++)
        sm += b.at(10-sw.at(j).at(k)) - '0';
      if(sm%2 != p.at(j))
        break;
    }
    if(j==M)
      c++;
  }

  cout << c << endl;
}
