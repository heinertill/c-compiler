#include <stdio.h>
#include <stdbool.h>

int ackermann(int n, int m);

int main() {
	printf("Ackermann von (3,3): %i\n", ackermann(3,3));
	return 0;
}

int ackermann(int n, int m) {
	if (n == 0) {
		return m+1;
	}
	if (m == 0) {
		return ackermann(n-1, 1);
	}
	return ackermann(n-1, ackermann(n, m-1));
}
