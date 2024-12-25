#include<stdio.h>
int main() {
	int ch[6], a[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6;i++)scanf("%d", &ch[i]);

	for (int i = 0; i < 6; i++) {
		if (ch[i] == a[i]) ch[i] = 0;
		else ch[i] = (a[i] - ch[i]);
	}
	for (int i = 0; i < 6; i++)printf("%d ", ch[i]);
}