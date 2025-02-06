#include <stdio.h>
#include <string.h>

// 1. 부호가 한가지라면 그냥 진행하기
// 2. - 있으면 가능한 많은 숫자를 한번에 빼기
int main() {
	char a[50] = { 0 };
	int num[50] = { 0 };
	int index = 0, temp = 0;

	// 문자열배열로 입력
	scanf("%s", a);

	// 먼저 숫자들을 잘라서 저장 
	for (int i = 0; i < strlen(a); i++) {
		// 부호마다 숫자를 자름
		if (a[i] == '+' || a[i] == '-') {
			num[index] = temp;
			temp = 0;
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
	// 디버깅
	for (int i = 0; i < strlen(a); i++) {

		printf("%d\n", num[i]);
	}
	return 0;
}