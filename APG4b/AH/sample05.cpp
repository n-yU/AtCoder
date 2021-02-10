#include <bits/stdc++.h>
using namespace std;

template<int MOD>
struct Modulo {
	int x;
	Modulo() {}
	Modulo(int v) {
		x = v % MOD;
	}

	Modulo plus(Modulo<MOD> other) {
		Modulo<MOD> result;
		result.x = (x + other.x) % MOD;
		return result;
	}
};

int main() {
	Modulo<10> a(7), b(5);
	auto c = a.plus(b);
	cout << c.x << endl;
}