#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,i,j,l, orK;
  string S, org;
  cin >> N >> K >> S;
  org = S;
  orK = K;

  set<char> t;
  map<char,int> mp;
  for(i=0; i<S.size(); i++) {
    if(t.count(S.at(i))) {
      if(mp.count(S.at(i)))
        mp.at(S.at(i))++;
      else
        mp[S.at(i)] = 2;
    } else
      t.insert(S.at(i));
  }

  for(i=0; i<S.size(); i++) {
    set<char> z=t;
    map<char,int> zmp=mp;
    int mtc=K+1, idx;
    char m = *begin(z);
    z.erase(m);
    if(zmp.count(m) && zmp.at(m)>1) {
      z.insert(m);
      zmp.at(m)--;
    }
    //cout << i << ": " << S << " / m: " << m << endl;

    if(S.at(i) == m) {
      t.erase(m);
      if(mp.count(m) && mp.at(m)>1) {
        t.insert(m);
        mp.at(m)--;
      }
      continue;
    }
    priority_queue<pair<char,int>, vector<pair<char,int>>, greater<pair<char,int>>> pq;

    for(l=0; l<S.size()-i; l++) {
      set<char> tt = t;
      map<char,int> tmp = mp;
      int tc=0, midx;

      for(j=i+1; j<N; j++) {
        if(tt.count(S.at(j))) {
          if(S.at(j) != m) {
            tt.erase(S.at(j));
            if(tmp.count(S.at(j)) && tmp.at(S.at(j))>1) {
              tt.insert(S.at(j));
              tmp.at(S.at(j))--;
            }
          } else {
            if(tmp.count(S.at(j)) && tmp.at(m)>1)
              tmp.at(m)--;
          	else {
              tt.erase(S.at(j));
              if(tmp.count(S.at(j)) && tmp.at(S.at(j))>1) {
                tt.insert(S.at(j));
                tmp.at(S.at(j))--;
              }
            }
          }
        } else
          tc++;
        if(S.at(j) == m)
          midx = j;
      }

      //cout << "m:" << m << " / tc:" << tc << " / mtc: " << mtc << endl;
      if(tc<mtc) {
        pq.push(make_pair(m, midx));
      }

      m = *begin(z);
      z.erase(m);
      if(zmp.count(m) && zmp.at(m)>1) {
        z.insert(m);
        zmp.at(m)--;
      }
    }

    if(pq.empty())
      break;

    while(!pq.empty()) {
      int ix = pq.top().second;
      //cout << "m: " << pq.top().first << " " << pq.top().second << endl;
      pq.pop();
      t.erase(S.at(ix));
      if(mp.count(S.at(ix)) && mp.at(S.at(ix))>1) {
        t.insert(S.at(ix));
        mp.at(S.at(ix))--;
      }
      swap(S.at(i), S.at(ix));
      //cout << S << endl;

      int nk=0;
      for(j=0; j<N; j++)
        if(S.at(j) != org.at(j))
          nk++;
      K=orK-nk;
      if(K>=0)
        break;
      else
        swap(S.at(i), S.at(ix));
    }
  }
  cout << S << endl;
}
