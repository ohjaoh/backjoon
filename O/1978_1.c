#include<stdio.h>
int main() {
	int n = 0, count = 0, e = 0;
	int number;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		for (int j = 2; j <= number; j++) {
			if (number == j) {
				count += 1;
			}
			if (number % j == 0) {
				break;
			}
		}
	}

	printf("%d", count);


	return 0;
}