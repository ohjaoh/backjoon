#include<stdio.h>
#include<string.h>//strlen�� ���ؼ�

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

	//printf("%d", a); �Է¿��� Ȯ�� O
	for (int i = 1; i < 100; i++) {
		b = a % 10;
		a = a / 10;
		a = a + b;
		//printf("%d\n", a); //�Է¿��� Ȯ�� O

		if (a < 10) {
			result += i;
			//printf("%d\n", a); //�Է¿��� Ȯ�� O
			//printf("%d\n", i);//result�� �Է� ���� Ȯ��
			break;
		}
	}
	//printf("%d", result);//result�� �Է� ���� Ȯ��
	//printf("%d\n", a);//��꿩�� Ȯ��O
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
	//num(X)�� �� �ڸ����� ��Y
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
	//Y�� 3�� ����ΰ�?
	if (num % 3 == 0) {
		printf("%d\n", b);
		printf("YES");
	}
	else {
		printf("%d\n", b);
		printf("NO");

	}
	*/