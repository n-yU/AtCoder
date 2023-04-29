#include <bits/stdc++.h>
using namespace std;

char RPS(char h) {
    char c;
    if(h == 'r')
        c = 'p';
    else if(h == 's')
        c = 'r';
    else
        c = 's';
    return c;
}

int main() {
    int N,K,R,S,P,i,a=0;
    string T;
    cin >> N >> K >> R >> S >> P >> T;

    string ph="";
    map<char,int> sc;
    sc['r'] = R;
    sc['s'] = S;
    sc['p'] = P;

    for(i=0; i<K; i++) {
        ph += RPS(T.at(i));
        a += sc.at(RPS(T.at(i)));
    }

    for(i=K; i<N; i++) {
        char ch = RPS(T.at(i));
        if(ch != ph.at(i%K)) {
            a += sc.at(ch);
            ph.at(i%K) = ch;
        } else {
            if(i+K < N) {
                set<char> h;
                h.insert('r');
                h.insert('s');
                h.insert('p');
                h.erase(ph.at(i%K));
                h.erase(RPS(T.at(i+K)));
                ph.at(i%K) = *begin(h);
            }
        }
    }

    cout << a << endl;
}