#include <bits\\stdc++.h>
using namespace std;
int n;
int fib[11234567];
int main() {
	cin >> n;
	fib[1] = fib[2] = 1;
	for (int i = 3; i <= n; i++) fib[i] = fib[i - 1] + fib[i - 2];
	cout << fib[n];
	getchar(), getchar();
}