#include<stdio.h>
int main() {
	char score[2];
	double so = 0;
	scanf("%s", &score);
	if (score[0] == 'A') {
		if (score[1] == '+')so = 4.3;
		if (score[1] == '0')so = 4;
		if (score[1] == '-')so = 3.7;
	}
	if (score[0] == 'B') {
		if (score[1] == '+')so = 3.3;
		if (score[1] == '0')so = 3;
		if (score[1] == '-')so = 2.7;
	}
	if (score[0] == 'C') {
		if (score[1] == '+')so = 2.3;
		if (score[1] == '0')so = 2;
		if (score[1] == '-')so = 1.7;
	}
	if (score[0] == 'D') {
		if (score[1] == '+')so = 1.3;
		if (score[1] == '0')so = 1;
		if (score[1] == '-')so = 0.7;
	}
	printf("%0.1f", so);

	return 0;
}