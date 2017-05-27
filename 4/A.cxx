#include <bits\\stdc++.h>
using namespace std;
int n;
vector<int> fib;

int fb(int n) {
	if (fib[n] == 0) {
		if (n == 1 || n == 2) fib[n] = 1;
		else fib[n] = fb(n - 1) + fb(n - 2);
	}
	return fib[n];
}

int main() {
	cin >> n;
	for (int i = 0; i <= n + 5; i++) fib.push_back(0);
	cout << fb(n);
	getchar(), getchar();
}