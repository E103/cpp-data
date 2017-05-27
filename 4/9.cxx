#include <bits\\stdc++.h>
using namespace std;
int n;
int fib[11234567];

int fb(int n) {
	if (fib[n] == 0) {
		if (n == 1 || n == 2) fib[n] = 1;
		else fib[n] = fb(n - 1) + fb(n - 2);
	}
	return fib[n];
}

int main() {
	cin >> n;
	cout << fb(n);
	getchar(), getchar();
}