#include<stdio.h>

int main() {
	int n, count = 0, most_frind = 0, frind_count = 0, check=0;
	char a[50][50];

	// 2-ģ�� = �Ѵٸ��ǳ�ģ�� + ģ�� 
	// 2-ģ���� ���帹�� �ִ� 
	// ģ���� ���� ���� ���� ģ��+ �Ѵٸ��ǳ�ģ��
	scanf("%d", &n);

	// �ϴ� ģ������ �ƴ��� ����
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf(" %c", &a[i][j]);
		}
	}
	// 2-ģ���� ��
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 'Y') {
				frind_count++; // ģ�����߰�

			}
		}
		if (check = frind_count) {
			for (int k = 0; k < n; k++) {
				
			}
		}

		printf("%d��° ģ���� ģ���� %d\n", i,frind_count); //üũ��

		check=frind_count;
		frind_count = 0; // ģ����üũ�� ���� �ʱ�ȭ
	}


	printf("count: %d", count);



	return 0;
}