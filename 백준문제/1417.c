#include <stdio.h>
int main() {
	int N = 0, M[101], people = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &M[i]);
	}
	for (int j = 1; j < N; j++) {
		for (int i = 1; i < N; i++) {
			if (M[j] <= M[i] && M[0] <= M[i]) {
				M[i] = M[i] - 1;
				M[0] += 1;
				people += 1;
				printf("M[0] = %d\n", M[0]);
				printf("i = %d\n", i);
				if (j == (N - 1) || M[0] == M[i]) {
					i = 0;
				}
			}else if (M[j] > M[i] && M[0] <= M[j]) {
				M[j] = M[j] - 1;
				M[0] += 1;
				people += 1;
				printf("M[0] = %d\n", M[0]);
				printf("j = %d\n", j);
				if (j == (N - 1) || M[0] == M[j]) {
					j = 0;
				}
			}
		}
	}

	printf("%d", people);
	//토너먼트 생각해보자 반례 3 5 6 8 

	return 0;
}