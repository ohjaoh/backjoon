#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int hour = 0, min = 0;

	cin >> a >> b;
	cin >> c;

	// a는 시 b는 분
	// c는 걸리는 시간
	// 최종 시간을 출력
	hour = a;
	min = c + b;
	if (min >= 60) {
		hour += min / 60;
		min = min % 60;
	}
	if (hour >= 24) {
		hour = hour % 24;
	}

	cout << hour << " " << min << endl;

	return 0;
}
