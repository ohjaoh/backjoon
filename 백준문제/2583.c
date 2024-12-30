#include <stdio.h>
#define MAX 102
int M = 0, N = 0, K = 0;

// Out of Bounds로 안풀림

int final[MAX][MAX] = { 0 }; // 모든 영역 사각형
int checked[MAX][MAX] = { 0 }; // 방문여부
// 방향배열 우, 좌, 하, 상
int banghang[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

static int dfs(int row, int col) {
	if (row < 0 || row >= M || col < 0 || col >= N || final[row][col] == 0 || checked[row][col]) {
		return 0;
	}
	checked[row][col] = 1;
	int size = 1;
	// 사방을 탐색
	for (int i = 0; i < 4; i++) {
		int new_row = row + banghang[i][0];
		int new_col = col + banghang[i][1];
		size += dfs(new_row, new_col);
	}

	return size;
}

int main() {
	int count = 0;
	int input_data[MAX][2] = { 0 }; // 꼭짓점들 입력배열
	int area[MAX] = { 0 }; // 각 영역의 넓이
	int dfs(int row, int col);

	// 배열 초기화
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			final[i][j] = 0;
			checked[i][j] = 0;
		}
	}
	scanf("%d %d %d", &M, &N, &K);

	// 모든 영역을 1로 초기화
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			final[i][j] = 1;
		}
	}
	// 이놈이 문젠가?
	for (int i = 0; i < K * 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &input_data[i][j]);
		}
	}

	// 사각형에 직사각형의 영역을 0으로 바꾼다.(왼쪽아래와 오른쪽 위)
	for (int i = 0; i < K * 2; i++) {
		if (i % 2 == 1) {
			int x1 = input_data[i - 1][0];
			int y1 = input_data[i - 1][1];
			int x2 = input_data[i][0];
			int y2 = input_data[i][1];

			printf("직사각형 좌표: (%d, %d) -> (%d, %d)\n", x1, y1, x2, y2);

			for (int j = x1; j < x2; j++) {
				for (int k = y1; k < y2; k++) {
					if (j < 0 || j >= N || k < 0 || k >= M) {
						printf("직사각형 처리 중 경계 초과: j=%d, k=%d\n", j, k);
					}
					else {
						final[k][j] = 0;
					}
				}
			}
		}

	}

	// 최종 넓이계산 및 갯수 측정
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (final[i][j] == 1 && !checked[i][j]) {
				if (count >= MAX) {
					printf("area 배열 접근 초과: count=%d\n", count);
					return 1;
				}
				area[count++] = dfs(i, j);
			}

		}

	}

	// 오름차순 정렬
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (area[i] > area[j]) {
				int temp = area[i];
				area[i] = area[j];
				area[j] = temp;
			}
		}

	}

	printf("%d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%d ", area[i]);
	}

	return 0;
}

/*

	// 디버그
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d", final[i][j]);
		}
		printf("\n");
	}
*/