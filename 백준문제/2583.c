#include <stdio.h>

int main() {
	int M = 0, N = 0, K = 0, x = 0, y = 0, count = 0;
	int str[100][2] = { 0 }; // 꼭짓점들 입력배열
	int final[100][100] = { 0 }; // 모든 영역 사각형
	int area[100] = { 0 }; // 각 영역의 넓이

	scanf("%d %d %d", &M, &N, &K);

	// 사각형을 1로 채워둠 추후 직사각형의 영역을 0으로 만들 생각
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			final[i][j] = 1;
		}
	}

	for (int i = 0; i < K * 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &str[i][j]);
		}
	}

	// 사각형에 직사각형의 영역을 0으로 바꾼다.
	// 왼쪽아래와 오른쪽 위
	for (int i = 0; i < K * 2; i++) {
		if (i % 2 == 1) {
			for (int j = str[i - 1][0]; j < str[i][0]; j++) {
				for (int k = str[i - 1][1]; k < str[i][1]; k++) {
					final[k][j] = 0;
				}
			}

		}

	}

	// 디버그
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d", final[i][j]);
		}
		printf("\n");
	}

	// 최종 넓이계산 및 갯수 측정 여기부터 시작
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (final[i][j] == 1) {

				area[count] += 1;
			}
			if (final[i + 1][j] == 0&& final[i][j+1]) {
				count += 1;
			}

		}
		
	}
	
	printf("총 갯수 %d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%d ", area[i]);
	}
	

	return 0;
}