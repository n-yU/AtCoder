#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,N;
  cin >> N;
  vector<string> S(N);
  vector<int> P(N);
  for(i=0; i<N; i++)
    cin >> S.at(i) >> P.at(i);

  set<string> st;
  for(string x : S)
    st.insert(x);

  map<string,vector<pair<int,int>>> gb;

  for(auto x : st)
    gb[x] = vector<pair<int,int>>(0);

  for(i=0; i<N; i++)
    gb.at(S.at(i)).push_back(make_pair(P.at(i),i+1));

  for(auto x : st) {
    sort(gb.at(x).begin(), gb.at(x).end());
    reverse(gb.at(x).begin(), gb.at(x).end());
  }

  for(pair<string,vector<pair<int,int>>> p : gb)
    for(pair<int,int> q : p.second)
      cout << q.second << endl;
}
