#include <stdio.h>
int main() {
	int em = 0;
	int a[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	//배열속의 수를 정렬시켜주는 프로그램
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[j] > a[i]) {
				em = a[j];
				a[j] = a[i];
				a[i] = em;
			}
		}
	}
	//정렬이 제대로 작동하는지 확인용
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}