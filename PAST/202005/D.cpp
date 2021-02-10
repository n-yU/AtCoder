#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

vector<string> d = {
	".###.#.#.#.#.#.#.###",
	"..#..##...#...#..###",
	".###...#.###.#...###",
	".###...#.###...#.###",
	".#.#.#.#.###...#...#",
	".###.#...###...#.###",
	".###.#...###.#.#.###",
	".###...#...#...#...#",
	".###.#.#.###.#.#.###",
	".###.#.#.###...#.###"
};

int main() {
	int N;
	cin >> N;
	vector<string> s(5);
	rep(i,5)
		cin >> s.at(i);

	rep(i,N) {
		string t = "";
		rep(j,5)
			rep(k,4)
				t += s.at(j).at(i*4+k);
		
		rep(j,10)
			if(t == d.at(j))
				cout << j;
	}
	cout << endl;
}