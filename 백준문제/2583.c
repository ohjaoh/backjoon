#include <stdio.h>

int main() {
	int M = 0, N = 0, K = 0, x = 0, y = 0, count = 0;
	int str[100][2] = { 0 }; // �������� �Է¹迭
	int final[100][100] = { 0 }; // ��� ���� �簢��
	int area[100] = { 0 }; // �� ������ ����

	scanf("%d %d %d", &M, &N, &K);

	// �簢���� 1�� ä���� ���� ���簢���� ������ 0���� ���� ����
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			final[i][j] = 1;
		}
	}

	for (int i = 0; i < K * 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &str[i][j]);
		}
	}

	// �簢���� ���簢���� ������ 0���� �ٲ۴�.
	// ���ʾƷ��� ������ ��
	for (int i = 0; i < K * 2; i++) {
		if (i % 2 == 1) {
			for (int j = str[i - 1][0]; j < str[i][0]; j++) {
				for (int k = str[i - 1][1]; k < str[i][1]; k++) {
					final[k][j] = 0;
				}
			}

		}

	}

	// �����
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			printf("%d", final[i][j]);
		}
		printf("\n");
	}

	// ���� ���̰�� �� ���� ���� ������� ����
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (final[i][j] == 1) {

				area[count] += 1;
			}
			if (final[i + 1][j] == 0&& final[i][j+1]) {
				count += 1;
			}

		}
		
	}
	
	printf("�� ���� %d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%d ", area[i]);
	}
	

	return 0;
}