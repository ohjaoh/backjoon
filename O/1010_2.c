#include <stdio.h>
void main() {
	int N, M, T, result = 1, ma = 0, a = 1, b = 0;
	int c[30];
	printf("T값 입력");
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		printf("M과 N값 입력\n");
		scanf("%d  %d", &N, &M);
		ma = M - N;
		//1곳에서 여러곳으로 가는경우 1 5
		if (N == 1) {
			//printf("N=1인경우");
			result = M;
			//printf("%d\n", result);
			//break;
		}
		//1곳에서 1곳으로만 가는 경우 2 2
		if (ma == 0) {
			//printf("ma=0");
			result = 1;
			//printf("%d\n", result);
			//break;
		}
		//보통의 경우 계산하는법 
		if (N != 1 && ma != 0) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < (ma - 1); k++) {
					a = a * (a + 1);
					printf("k의 값 : %d\n", k);
					printf("a의 값 : %d\n", a);
					printf("b의 값 : %d\n", b);
					b = b + ma * a;
					ma = ma - 1;
					printf("\n");
				}
				result = ma + b;
			}
		}
		printf("%d\n", result);
	}
	//67,863,915
}