#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void showBString(char str[]);

int main() {
	char str[] = "101011111";
	showBString(str);
	char str2[] = "01000001";
	showBString(str2);
	return 0;
}

void showBString(char str[]) {
	int length = strlen(str);
	int firstSpace = length % 4;
	for (int l=0; l<firstSpace; l++) {
		printf("%c", str[l]);
	}
	for (int i=firstSpace; i<length; i++) {
		if ((i-firstSpace) % 4 == 0) {
			printf(" %c", str[i]);
		} else {
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
