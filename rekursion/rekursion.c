#include <stdio.h>
#include <stdbool.h>

int sum(int n);
int fakultaet(int n);
int fibonacci(int n);

int main() {
	printf("Summationsfunktionswert von 7: %i\n", sum(7));
	printf("Fakultaet von 7: %i\n", fakultaet(7));
	printf("Fibonacci von 7: %i\n", fibonacci(7));
	return 0;
}

int sum(int n) {
	if (n <= 0) {
		return 0;
	}
	return n + sum(n-1);
}

int fakultaet(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * fakultaet(n-1);
}

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
