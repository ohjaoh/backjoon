#include <stdio.h>
void main() {
	int N, M, T, result = 1, ma = 0, a = 1, b = 0;
	int c[30];
	printf("T�� �Է�");
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		printf("M�� N�� �Է�\n");
		scanf("%d  %d", &N, &M);
		ma = M - N;
		//1������ ���������� ���°�� 1 5
		if (N == 1) {
			//printf("N=1�ΰ��");
			result = M;
			//printf("%d\n", result);
			//break;
		}
		//1������ 1�����θ� ���� ��� 2 2
		if (ma == 0) {
			//printf("ma=0");
			result = 1;
			//printf("%d\n", result);
			//break;
		}
		//������ ��� ����ϴ¹� 
		if (N != 1 && ma != 0) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < (ma - 1); k++) {
					a = a * (a + 1);
					printf("k�� �� : %d\n", k);
					printf("a�� �� : %d\n", a);
					printf("b�� �� : %d\n", b);
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