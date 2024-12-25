#include <stdio.h>
int main() {
	char str[51][51], print[51];
	int N, yn;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s\n", str[i]);
	}

	for (int j = 0; j < 51; j++) {
		yn = 1;
		for (int i = 0; i < N; i++) {
			if (str[i][j] != str[0][j])
				yn = 0;
		}
		if (yn)
			print[j] = str[0][j];
		else
			print[j] = '?';
	}
	printf("%s", print);

	return 0;
}