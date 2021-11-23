#include <stdio.h>
#include <stdbool.h>

int main() {
	double pi = 1;
	for (double i = 1; i <= 1000000; i += 2) {
		pi *= (i+1)/i;
		pi *= (i+1)/(i+2);
	}
	printf("Pi is approximately %f\n", pi*2);
	return 0;
}
