#include <stdio.h>
#include <string.h>

// ��� -�� ������ �� ���������� ���� �� - ������ ���� ��� ���� ���̴�.
int main() {
	char a[50] = { 0 };
	int num[50] = { 0 };
	int index = 0, temp = 0, front = 0, back = 0, lock = 0, check = 0, result = 0;

	// ���ڿ��迭�� �Է�
	scanf("%s", a);

	// ���� ���ڵ��� �߶� ���� 
	for (int i = 0; i < strlen(a); i++) {
		// ��ȣ���� ���ڸ� �ڸ�
		if (a[i] == '+') {
			num[index] = temp;
			temp = 0;
			index++;
		}
		if (a[i] == '-') {
			printf("-���� %d\n", index);
			num[index] = temp;
			temp = 0;
			if (lock == 0) {
				// �̶��� ���� �ε��� ����
				check = index + 1;
				lock = 1;
			}
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

	if (check != 0) {
		// ù - ������ ���ڵ��� ��
		for (int i = 0; i < check; i++) {
			front += num[i];
		}

		// ù - ������ ���ڵ��� ���� ����
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

	// �����
	printf("index %d\n", index);
	printf("check %d\n", check);
	printf("front %d\n", front);
	printf("back %d\n", back);
	printf("result %d\n", result);

	return 0;
}