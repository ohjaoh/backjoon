#include<stdio.h>
#include<string.h>//strlen을 위해서

int main() {
	char X[1000000];
	int a = 0, strle = 0, result = 0, count = 0, mid[10], strle2 = 0;

	scanf("%s", &X);

	strle = strlen(X);
	if (strle == 1) { a = X[0] - '0'; }
	else {
		for (int z = 0; z < strle; z++) { a += X[z] - '0'; }//문자열로 저장했으니 48인가 1인데 -'0'하면 0은 47인가 그래서 정수형으로 나온다.
		result = 1;
		while (a > 10) {
			for (int j = 0; j < 10; j++) {
				mid[j] = a % 10;
				a = a / 10;
				if (a < 10)break;
			}
			strle2 = sizeof(mid) / 4; //int는 4바이트이니까 /4한것
			for (int k = 0; k <= strle2; k++) { a += mid[k]; }
			count++;
		}
	}

	result += count;
	if (a % 3 == 0) {
		printf("%d\n", result);
		printf("Yes");
	}
	else {
		printf("%d\n", result);
		printf("No");
	}
	return 0;
}