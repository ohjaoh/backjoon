#include <stdio.h>
int main() {
	int r, n, em = 0;
	int a[50];

	scanf("%d", &r);
	for (int i = 0; i < r; i++) {
		scanf("%d", &a[i]);
	}
	//배열속의 수를 정렬시켜주는 프로그램
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (a[j] > a[i]) {
				em = a[j];
				a[j] = a[i];
				a[i] = em;
			}
			printf("%d ", a[j]);
		}
	}
	//정렬이 제대로 작동하는지 확인용
	for (int i = 0; i < r; i++) {
		printf("%d", a[i]);
	}
	em = a[0];
	n = a[r-1];
	n = n * em;
	printf("n은 %d입니다.", n);

	return 0;
}