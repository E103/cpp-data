#include <bits\\stdc++.h>
using namespace std;
int year;

void MoGeHanShu(int year) {
	if (year < 17) cout << "��ѽ,�Ͼ�too young!";
	else cout << "ok";
}

int main() {
	cin >> year;
	MoGeHanShu(year);
	getchar(), getchar();
}