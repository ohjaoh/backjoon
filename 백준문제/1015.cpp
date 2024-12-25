#include<stdio.h>
int main() {
	int P[50], A[50];
	int N = 0, check = 0, X = 0, Y = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < N; i++) P[i] = A[i];

	for (int i = 0; i < N; i++) {

		for (int j = (N - 1); j >= i; j--) {

			if (P[i] == P[j]) {
				P[j] += 1;
			}


			if (P[i] != 0 && P[i] == 1 && check == 0) {
				if (i < j) {
					P[i] -= 1;
				}
				check++;
			}

		}

		//입력1의 경우
		if (P[i] == N) {
			for (int k = 0; k < N; k++)
				P[k] -= 1;
		}
	}
	for (int i = 0; i < N; i++) printf("%d ", P[i]);
	return 0;
}