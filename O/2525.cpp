#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int hour = 0, min = 0;

	cin >> a >> b;
	cin >> c;

	// a�� �� b�� ��
	// c�� �ɸ��� �ð�
	// ���� �ð��� ���
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
