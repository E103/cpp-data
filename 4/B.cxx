#include <bits\\stdc++.h>
using namespace std;
int n;
int *fib;

int fb(int n) {
	if (fib[n] == 0) {
		if (n == 1 || n == 2) fib[n] = 1;
		else fib[n] = fb(n - 1) + fb(n - 2);
	}
	return fib[n];
}

int main() {
	cin >> n;
	fib = (int*)calloc(n + 5, sizeof(int));
	cout << fb(n);
	free(fib);
	getchar(), getchar();
}