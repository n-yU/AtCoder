#include <bits/stdc++.h>
using namespace std;

int main() {
  char b;
  cin >> b;
  map<char,char> x;
  x['A']='T'; x['T']='A'; x['C']='G'; x['G']='C';
  cout << x[b] << endl;
}
