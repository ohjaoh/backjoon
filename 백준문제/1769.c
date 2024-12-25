#include<stdio.h>
#include<string.h>//strlen을 위해서

int main() {
	char X[1000001];
	int a = 0, b = 0, result = 1;

	scanf("%s", &X);
	b = strlen(X);
	for (int i = 0; i < b; i++) {
		if (X[i] == '0') { a += 0; }
		if (X[i] == '1') { a += 1; }
		if (X[i] == '2') { a += 2; }
		if (X[i] == '3') { a += 3; }
		if (X[i] == '4') { a += 4; }
		if (X[i] == '5') { a += 5; }
		if (X[i] == '6') { a += 6; }
		if (X[i] == '7') { a += 7; }
		if (X[i] == '8') { a += 8; }
		if (X[i] == '9') { a += 9; }
	}

	//printf("%d", a); 입력여부 확인 O
	for (int i = 1; i < 100; i++) {
		b = a % 10;
		a = a / 10;
		a = a + b;
		//printf("%d\n", a); //입력여부 확인 O

		if (a < 10) {
			result += i;
			//printf("%d\n", a); //입력여부 확인 O
			//printf("%d\n", i);//result에 입력 여부 확인
			break;
		}
	}
	//printf("%d", result);//result에 입력 여부 확인
	//printf("%d\n", a);//계산여부 확인O
	if (a == 3 || a == 6 || a == 9) {
		printf("%d\n", result);
		printf("Yes");
	}
	else {
		printf("%d\n", result);
		printf("No");
	}

	return 0;
}
/*
	//num(X)의 각 자리수의 합Y
	while (num > 9) {
		while (num > 0)
		{
			a = num % 10;
			num = num / 10;
			na += a;

		}
		num = na;
		b += 1;
		na = 0;
		printf("%d\n", num);
	}
	//Y는 3의 배수인가?
	if (num % 3 == 0) {
		printf("%d\n", b);
		printf("YES");
	}
	else {
		printf("%d\n", b);
		printf("NO");

	}
	*/