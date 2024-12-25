#include<stdio.h>
int main() {
	int n = 0, count = 0, e = 0;
	int number[100];

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (number[i] % j == 0) {
				e += 1;
			}
		}
		if (e >= 3) {
			e = 0;
		}
		else if (e < 3) {
			count += 1;
			e = 0;
		}
	}
	count -= 1;
	printf("%d", count);


	return 0;
}