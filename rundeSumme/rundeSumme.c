#include <stdio.h>
#include <stdbool.h>

int rundeSumme(int n);
int addiere(int a, int b, int c);

int main() {
	printf("%i\n", addiere(12,16,22));
	return 0;
}

int rundeSumme(int n) {
	n = (n+5) / 10 * 10;
	return n;
}

int addiere(int a, int b, int c) {
	int sum = rundeSumme(a) + rundeSumme(b) + rundeSumme(c);
	return sum;
}
