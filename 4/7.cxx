#include <bits\\stdc++.h>
using namespace std;
int n;

int fb(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	return fb(n - 1) + fb(n - 2);
}

int main() {
	cin >> n;
	cout << fb(n);
	getchar(), getchar();
}