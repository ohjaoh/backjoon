#include <stdio.h>
void main() {
	int N, M, T, result;

	printf("T�� �Է�");
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		printf("M�� N�� �Է�\n");
		scanf("%d  %d", &N, &M);
		result = 1;
		for (int j = 0; j < N; j++) {
			result = result * (M - j);
			result = result / (1 + j);
		}
		printf("%d\n", result);
	}


}