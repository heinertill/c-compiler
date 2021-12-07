#include <stdio.h>
#include <stdbool.h>

int ggT(int a, int b);

int main() {
	int a = 142;
	int b = 2256;
	printf("Der ggT von %i und %i ist %i!\n", a, b, ggT(a,b));
	return 0;
}

int ggT(int a, int b) {
	while (a != b) {
		if (a >= b) {
			a = a - b;
		} else {
			int temp = a;
			a = b;
			b = temp;
		}
	}
	return a;
}
