#include <stdio.h>

int main() {
	int N = 0, temp = 0, result = 0, max = 0, max_end = 100, max_index=-1;
	int a[50] = { 0 };
	int b[50] = { 0 };
	int used[50] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%d", &b[i]);
	}
	// a[0]*b[0] + a[1]*b[1] + ... + a[N-1]*b[N-1]의 최솟값
	// 결론 -> a의 가장 작은 녀석을 b의 최댓값인 녀석에 메치시키는 형태로 재배열 시키기
	// 지금 생각난 방법
	// 1.a배열을 작은 것부터 정렬시킨다. 
	// 2.a배열의 i번째 녀석과 b 배열의 가장 큰 녀석을 곱하고 더한다.

	// 1. a배열을 오름차순으로 정렬
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	// 2. a[i]와 b배열의 가장 큰 녀석을 곱하며 결과에 더함
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (max <= b[j] && !used[j]) {
				max = b[j];
				max_index = j;
			}
			// printf("(i, j)=(%d, %d)  result=%d  max=%d  max_end = %d\n", a[i], b[j], result, max, max_end);
		}

		// 정리 및 계산 부분
		used[max_index] = 1;
		result += a[i] * max;
		max_end = max;
		max = 0;
	}

	printf("최종 %d\n", result);

	return 0;
}
