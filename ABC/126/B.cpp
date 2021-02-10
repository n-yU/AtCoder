#include <bits/stdc++.h>
using namespace std;

char wc(int n) {
  char c;
  if(n>12)
    c = 'N';
  else if(n>0)
    c = 'A';
  else
    c = 'N';
  return c;
}

int main() {
  string S;
  int a,b;
  char wa, wb;
  cin >> S;
  a = (S[0]-'0')*10 + (S[1]-'0');
  b = (S[2]-'0')*10 + (S[3]-'0');
  wa = wc(a);
  wb = wc(b);

  if(wa=='A' && wb=='A')
    cout << "AMBIGUOUS";
  else if(wa=='A' && wb=='N')
    cout << "MMYY";
  else if(wa=='N' && wb=='A')
    cout << "YYMM";
  else
    cout << "NA";
  cout << endl;
}
