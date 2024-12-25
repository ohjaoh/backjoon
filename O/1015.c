#include<stdio.h>
int main() {
	int P[50], A[50], B[50],C[50];
	int N = 0, check = 0, X = 0, Y = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < N; i++) {
		B[i] = A[i];
		C[i] = i;
	}
	//1.B를 정렬시킨다
	for (int i = 0; i < N; i++) {
		
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (B[i] < B[j]) {
				X = B[j];
				B[j] = B[i];
				B[i] = X;

			}
		}
	}
	//정렬확인용
	for (int i = 0; i < N; i++) {
		printf("%d ", B[i]);
	}
	printf("\n");
	for (int i = 0; i < N; i++) {
		printf("%d ", C[i]);
	}


	//for (int i = 0; i < N; i++) printf("%d ", P[i]);
	return 0;
}