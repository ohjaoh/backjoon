#include<stdio.h>

int main() {
	char alp[100];
	int count = 0;
	scanf("%s", alp);

	for (int i = 0; i < 100; i++) {
		if (alp[i] != NULL) {
			count++;
		}
		if (alp[i] == NULL)
			break;
	}
	printf("%d", count);

	return  0;
}