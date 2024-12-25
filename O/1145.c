#include<stdio.h>
int main() {
	int a[5], x = 0, check = 0, result = 0;

	for (int i = 0; i < 5; i++) scanf("%d", &a[i]);

	while (result == 0) {

		for (int i = 0; i < 5; i++) {
			if (x % a[i] == 0)check++;
			if (check >= 3) result = x;
			else result = 0;
		}
		x++;
		check = 0;

		
	}
	printf("%d", result);




	return 0;
}