#include<stdio.h>

int main() {
	// N�ڸ� ������ x,y
	// x�� a���� �ڸ���, y�� b���� �ڸ��� 1�� �Ǿ��ִ�.�� �� �� �� ��� 0���� ������ �� �ִ�.
	// x XOR y�� �ִ밪 
	int two(int n, int a);
	int N = 0, a = 0, b = 0, total = 0, minus = 0, result = 0;

	// �Է�
	fscanf(stdin, "%d", &N);
	fscanf(stdin, "%d %d", &a, &b);

	minus = (N - a) + (N - b);
	total = a + b;

	if (minus <= N) {
		result = two(N, minus);
	}
	else if(minus>N){

		result = two(N, total);
	}
	else {
		result = 0;
	}


	printf("%d\n", result);
	return 0;
}

int two(int n, int a) {
	int result1 = 0;

	for (int i = 0; i < a; i++) {
		result1 += (1 << (n - 1 - i)); // ��Ʈ������ << ���� ���ڸ�ŭ �������� �̵� �� 2�� ���ڽ�
	}

	return result1;
}