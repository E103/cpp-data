#include <bits\\stdc++.h>
using namespace std;
int year;

int MoGeHanShu(int year) {
	if (year < 17) return 1;
	else return 0;
}

int main() {
	cin >> year;
	int b = MoGeHanShu(year);
	if (b == 1) cout << "ÄãÑ½,±Ï¾¹too young!";
	else cout << "ok";
	getchar(), getchar();
}