#include<stdio.h>

int main() {
	int n, count = 0, most_frind = 0, frind_count = 0, check=0;
	char a[50][50];

	// 2-친구 = 한다리건너친구 + 친구 
	// 2-친구가 가장많은 애는 
	// 친구가 가장 많은 애의 친구+ 한다리건너친구
	scanf("%d", &n);

	// 일단 친구인지 아닌지 저장
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf(" %c", &a[i][j]);
		}
	}
	// 2-친구를 구
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 'Y') {
				frind_count++; // 친구수추가

			}
		}
		if (check = frind_count) {
			for (int k = 0; k < n; k++) {
				
			}
		}

		printf("%d번째 친구의 친구수 %d\n", i,frind_count); //체크용

		check=frind_count;
		frind_count = 0; // 친구수체크를 위한 초기화
	}


	printf("count: %d", count);



	return 0;
}