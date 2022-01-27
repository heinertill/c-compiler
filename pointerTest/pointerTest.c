#include <stdio.h>
#include <stdbool.h>

int main() {
	int j = 12;
	int *ptr = &j;
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	return 0;
}
