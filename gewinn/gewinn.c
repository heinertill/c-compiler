#include <stdio.h>
#include <stdbool.h>

int gewinn(int a, int b, int c);

int main() {
	int a, b, c;
	printf("%i\n", gewinn(1,1,1));
	return 0;
}

int gewinn(int a, int b, int c) {
	if (a == b && b == c) {
		return(20);
	} else if (a == b || b == c || a == c) {
		return(10);
	} else {
		return(0);
	}
}
