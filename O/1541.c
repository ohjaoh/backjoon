#include <stdio.h>
#include <string.h>

// 결론 -가 나오면 그 이전까지의 합한 수 - 나머지 뒤의 모든 수의 합이다.
int main() {
	char a[50] = { 0 };
	int num[50] = { 0 };
	int index = 0, temp = 0, front = 0, back = 0, lock = 0, check = 0, result = 0;

	// 문자열배열로 입력
	scanf("%s", a);

	// 먼저 숫자들을 잘라서 저장 
	for (int i = 0; i < strlen(a); i++) {
		// 부호마다 숫자를 자름
		if (a[i] == '+') {
			num[index] = temp;
			temp = 0;
			index++;
		}
		if (a[i] == '-') {
			printf("-진입 %d\n", index);
			num[index] = temp;
			temp = 0;
			if (lock == 0) {
				// 이때의 숫자 인덱스 저장
				check = index + 1;
				lock = 1;
			}
			index++;
		}
		// 문자열배열로 입력한 것을 숫자만 추려냄
		if ('0' <= a[i] && a[i] <= '9') {
			temp = temp * 10 + a[i] - '0';
		}
		// 마지막 숫자
		if (i == strlen(a) - 1) {
			num[index] = temp;
		}
	}

	if (check != 0) {
		// 첫 - 이전의 숫자들의 합
		for (int i = 0; i < check; i++) {
			front += num[i];
		}

		// 첫 - 이후의 숫자들을 전부 더함
		for (int i = check; i <= index; i++) {
			back += num[i];
		}
	}
	else {
		for (int i = 0; i <= index; i++) {
			front += num[i];
		}
	}

	result = front - back;

	// 디버그
	printf("index %d\n", index);
	printf("check %d\n", check);
	printf("front %d\n", front);
	printf("back %d\n", back);
	printf("result %d\n", result);

	return 0;
}