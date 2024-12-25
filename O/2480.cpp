#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int prize = 0;
	int max_num = 0;
	cin >> a >> b >> c;

	// 주사위 눈이 a,b,c로 들어옴
	// 3개가 같은 경우 10000+눈*1000
	// 2개가 같은 경우 1000+ 같은 눈*100
	// 다 다른 눈 가장 큰 눈*100

	if (a == b && a== c) {
		prize = 10000 + (a * 1000);
	}
	else if (a == b || a == c) {
		prize = 1000 + a * 100;
	}
	else if (b == c) {
		prize = 1000 + b * 100;
	}
	else {
		max_num = (a > b) ? a : b;
		max_num = (max_num > c) ? max_num : c;
		prize = max_num * 100;
	}

	cout << prize << endl;

	return 0;
}
