#include <stdio.h>
#include <stdbool.h>

int main() {
	int n;
	scanf("%i", &n);
	int fakultaet = 1;
	for (int i = 1; i <= n; i++) {
		fakultaet = fakultaet * i;
	}
	printf("%i! ist die Zahl %i\n", n, fakultaet);
	return 0;
}
