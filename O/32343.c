#include<stdio.h>

int main() {
	// N자리 이진수 x,y
	// x는 a개의 자리가, y는 b개의 자리가 1로 되어있다.이 때 두 수 모두 0으로 시작할 수 있다.
	// x XOR y의 최대값 
	int two(int n, int a);
	int N = 0, a = 0, b = 0, total = 0, minus = 0, result = 0;

	// 입력
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
		result1 += (1 << (n - 1 - i)); // 비트연산자 << 숫자 숫자만큼 왼쪽으로 이동 즉 2의 숫자승
	}

	return result1;
}