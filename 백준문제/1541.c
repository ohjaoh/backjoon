#include <stdio.h>
#include <string.h>

// 1. ��ȣ�� �Ѱ������ �׳� �����ϱ�
// 2. - ������ ������ ���� ���ڸ� �ѹ��� ����
int main() {
	char a[50] = { 0 };
	int num[50] = { 0 };
	int index = 0, temp = 0;

	// ���ڿ��迭�� �Է�
	scanf("%s", a);

	// ���� ���ڵ��� �߶� ���� 
	for (int i = 0; i < strlen(a); i++) {
		// ��ȣ���� ���ڸ� �ڸ�
		if (a[i] == '+' || a[i] == '-') {
			num[index] = temp;
			temp = 0;
			index++;
		}

		// ���ڿ��迭�� �Է��� ���� ���ڸ� �߷���
		if ('0' <= a[i] && a[i] <= '9') {
			temp = temp * 10 + a[i] - '0';
		}

		// ������ ����
		if (i == strlen(a) - 1) {
			num[index] = temp;
		}
	}
	// �����
	for (int i = 0; i < strlen(a); i++) {

		printf("%d\n", num[i]);
	}
	return 0;
}