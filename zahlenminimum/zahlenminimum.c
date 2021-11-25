#include <stdio.h>
#include <stdbool.h>

int main() {
	float highest = 0;
	int amount = 0;

	do {
		float temp = 0;
		scanf("%f", &temp);
		if (temp >= 0) {
			amount++;
			if (temp > highest) {
				highest = temp;
			}
		}
	} while (amount < 10);
	

	printf("%f ist die größte der eingegebenen Zahlen.\n", highest);
	return 0;
}
