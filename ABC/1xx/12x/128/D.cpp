#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,i,x,A,B,RR=0;
  cin >> N >> K;
  deque<int> D;
  priority_queue<int, vector<int>, greater<int>> j;

  for(i=0; i<N; i++) {
    cin >> x;
    D.push_back(x);
  }

  for(A=0; A<=min(N,K); A++) {
    for(B=0; B<=min(N,K)-A; B++) {
      deque<int> td=D;
      priority_queue<int, vector<int>, greater<int>> tj=j;
      int r=0;

      for(i=0; i<A; i++) {
        tj.push(td.front());
        td.pop_front();
      }
      for(i=0; i<B; i++) {
        tj.push(td.back());
        td.pop_back();
      }

      for(i=0; i<K-(A+B); i++) {
        if(!tj.empty() && tj.top() < 0)
       	 tj.pop();
        else
          break;
      }

      while (!tj.empty()) {
   	    r += tj.top();
        tj.pop();
      }

      if(RR < r)
        RR = r;
    }
  }

  cout << RR << endl;
}
