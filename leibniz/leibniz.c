#include <stdio.h>
#include <stdbool.h>

int main() {
	double pi = 0;
	bool addition = true;
	for (double i = 1; i <= 1000000; i += 2) {
		if (addition) {
			pi += 1/i;
			addition = false;
		} else {
			pi -= 1/i;
			addition = true;
		}
	}
	printf("Pi is approximately %f\n", pi*4);
	return 0;
}
