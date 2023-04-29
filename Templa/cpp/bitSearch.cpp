int main() {
  int n=5,b,i;

  for (b=0; b<(1<<n); b++) {
    vector<int> S;
    for (i=0; i<n; i++) {
      if (bit & (1<<i))
        S.push_back(i);

    cout << b << ": {";
    for (i=0; i<(int)S.size(); i++)
      cout << S[i] << " ";
    cout << "}" << endl;
  }
}
