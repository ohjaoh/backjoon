/*
#include <stdio.h>
#include <string.h>
int main(void) {
	char al[15];
	scanf("%s", al);
	for (int i = 0; i < strlen(al); i++) {
		if (i % 3 == 0 && i != 0) {
			printf("..*..\n.*.*.\n*.%c.*\n.*.*.\n..*..\r", al[i]);
			i = i + 1;
		}else{
			printf("..#..\n.#.#.\n#.%c.#\n.#.#.\n..#..\r", al[i]);
		}	
	}
	return 0;
}
*/