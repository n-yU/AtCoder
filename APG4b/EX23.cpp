#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, i, mv=0, mk;
  cin >> N;
  map<int,int> m;
  
  for(i=0; i<N; i++) {
    cin >> A;
    if(m.count(A))
      m.at(A)++;
    else
      m[A] = 1;
  }
  
  for (auto p : m) {
 	auto k = p.first;
  	auto v = p.second;
    if(v > mv) {
      mk = k;
      mv = v;
	}
  }
  
  cout << mk << " " << mv << endl;
}