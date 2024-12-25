/*
#include <stdio.h>
int main() {
	int a[10], b = 0, c = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &b);
		a[i] = b % 42;
	}
	for (int i = 0; i < 10; i++) {
		int d = 0;
		for (int j = i + 1; j < 10; j++) {
			if (a[i] == a[j]) {
				d++;
			}
		}
		if (d == 0) {
			c ++;
		}
	}
	printf("\n");
	printf("%d\n", c);

	return 0;
}
*/