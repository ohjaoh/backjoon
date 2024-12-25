#include <stdio.h>	
int main() {
	int n;
	float score[1000], new_score = 0, avg = 0, total = 0, max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &score[i]);
	}

	if (n == 1) {
		avg = 1 * 100;
		printf("%f", avg);
	}

	if (n > 1) {
		for (int i = 0; i < (n - 1); i++) {
			if (score[i] < score[i + 1]) {
				max = score[i + 1];
			}
			else if (score[i] >= score[i + 1]) {
				max = score[i];
			}
		}

		for (int j = 0; j < n; j++) {
			new_score = score[j] * 100 / max;
			score[j] = new_score;
			total += score[j];
		}
		avg = total / n;
		printf("%f", avg);
	}

	return 0;

}