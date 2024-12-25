#include<stdio.h>
#include<string.h>

int main() {
	char X[1000001];
	int a = 0, strle = 0, count = 0, mid[100], i, midcount = 0;

	scanf("%s", &X);
	strle = strlen(X);
	if (strle == 1) { a = X[0] - '0'; }
	else {
		for (int z = 0; z < strle; z++) { a += X[z] - '0'; }
		count = 1;
		while (a > 0) {
			count++;
			for (i = 0; i < 100; i++) {
				mid[i] = a % 10;
				a = a / 10;
				if (a < 10) {
					midcount = i;
					break;
				}
			}
			for (i = 0; i <= midcount; i++) {
				a = a + mid[i];
			}
			if (a < 10)break;
		}
	}
	if (a % 3 == 0) {
		printf("%d\n", count);
		printf("Yes\n");
	}
	else {
		printf("%d\n", count);
		printf("No\n");
	}
	return 0;
}