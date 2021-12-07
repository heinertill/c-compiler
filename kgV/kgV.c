#include <stdio.h>
#include <stdbool.h>

int ggT(int a, int b);
int kgV(int a, int b);

int main() {
	int a = 142;
	int b = 2256;
	printf("Das kgV von %i und %i ist %i!\n", a, b, kgV(a, b));
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

int kgV(int a, int b) {
	int kgV = (a * b) / ggT(a,b);
	return kgV;
}
