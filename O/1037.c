#include <stdio.h>
int main() {
	int r, n, em = 0;
	int a[50];

	scanf("%d", &r);
	for (int i = 0; i < r; i++) {
		scanf("%d", &a[i]);
	}
	//�迭���� ���� ���Ľ����ִ� ���α׷�
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < r; j++) {
			if (a[j] > a[i]) {
				em = a[j];
				a[j] = a[i];
				a[i] = em;
			}
			printf("%d ", a[j]);
		}
	}
	//������ ����� �۵��ϴ��� Ȯ�ο�
	for (int i = 0; i < r; i++) {
		printf("%d", a[i]);
	}
	em = a[0];
	n = a[r-1];
	n = n * em;
	printf("n�� %d�Դϴ�.", n);

	return 0;
}