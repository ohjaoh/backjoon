#include<stdio.h>
int main() {
	int N, over_pl, over_mi;
	long long int a = 0, S = 0;

	for (int k = 0; k < 3; k++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%lld", &a);
			S += a;
			if (S >= 9223372036854775807) {
				S = 1;
			}
			else if (S <= -9223372036854775806) {
				S = -1;
			}
		}
		if (S < 0) {
			printf("-");
		}
		else if (S > 0) {
			printf("+");
		}
		else { 
			printf("0"); }
		S = 0;
		a = 0;
	}

	return 0;
}