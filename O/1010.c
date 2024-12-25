#include <stdio.h>
void main() {
	int N, M, T, result;

	printf("T값 입력");
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		printf("M과 N값 입력\n");
		scanf("%d  %d", &N, &M);
		result = 1;
		for (int j = 0; j < N; j++) {
			result = result * (M - j);
			result = result / (1 + j);
		}
		printf("%d\n", result);
	}


}