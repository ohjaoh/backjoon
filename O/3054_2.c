#include <stdio.h>
#include <string.h>
int main(void) {
	char al[15];
	scanf("%s", al);
	for (int i = 0; i < strlen(al); i++) {
		if (strlen(al) == 1) {
			printf("..#..\n.#.#.\n#.%c.#\n.#.#.\n..#..\n", al[i]);
			break;
		}
		//..*..\n.*.*.\n*.%c.*\n.*.*.\n..*..\n
		if ((i + 1) % 3 == 0 && i != 0) {
			if ((i + 1) == strlen(al)) {
				printf("..*..\n");
				printf(".*.*.\n");
				printf("*.%c.*\n", al[i]);
				printf(".*.*.\n");
				printf("..*..\n");
				break;
			}
			printf("..*..");
			printf(".*.*.");
			printf("*.%c.*", al[i]);
			printf(".*.*.");
			printf("..*..");
		}
		else {
			if ((i + 1) == strlen(al)) {
				printf("..#..\b\n");
				printf(".#.#.\b\n");
				printf("#.%c.#\b\n", al[i]);
				printf(".#.#.\b\n");
				printf("..#..\b\n");
				break;
			}
			printf("..#..\b");
			printf(".#.#.\b");
			printf("#.%c.#\b", al[i]);
			printf(".#.#.\b");
			printf("..#..\b");
		}
		if ((i + 1) == strlen(al)) {
			printf("4¿©±â¿¡ ¶¹À½?");
		}
	}






	return 0;
}