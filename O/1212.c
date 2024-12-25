#include<stdio.h>
#include<string.h>//strlen은 <cstring> 헤더파일에 존재함 
char two[333334];
int main() {
	int c = 1, a = 0, l;

	scanf("%s", two);
	if (two[0] == '0') { printf("0"); return 0; }
	l = strlen(two);
	for (int i = 0; i < l; i++) {
		if (i != 0) {
			if (two[i] == '0') printf("%d%d%d", a, a, a);
			else if (two[i] == '1') printf("%d%d%d", a, a, c);
			else if (two[i] == '2') printf("%d%d%d", a, c, a);
			else if (two[i] == '3') printf("%d%d%d", a, c, c);
			else if (two[i] == '4') printf("%d%d%d", c, a, a);
			else if (two[i] == '5') printf("%d%d%d", c, a, c);
			else if (two[i] == '6') printf("%d%d%d", c, c, a);
			else if (two[i] == '7') printf("%d%d%d", c, c, c);
		}
		else {
			if (two[i] == '1') printf("%d%d", c);
			else if (two[i] == '2') printf("%d%d", c, a);
			else if (two[i] == '3') printf("%d%d", c, c);
			else if (two[i] == '4') printf("%d%d%d", c, a, a);
			else if (two[i] == '5') printf("%d%d%d", c, a, c);
			else if (two[i] == '6') printf("%d%d%d", c, c, a);
			else if (two[i] == '7') printf("%d%d%d", c, c, c);
		}

	}

	return 0;
}