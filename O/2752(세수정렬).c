#include <stdio.h>
int main() {
	int em = 0;
	int a[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	//�迭���� ���� ���Ľ����ִ� ���α׷�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (a[j] > a[i]) {
				em = a[j];
				a[j] = a[i];
				a[i] = em;
			}
		}
	}
	//������ ����� �۵��ϴ��� Ȯ�ο�
	for (int i = 0; i < 3; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}