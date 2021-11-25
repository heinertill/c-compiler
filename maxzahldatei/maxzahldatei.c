#include <stdio.h>
#include <stdbool.h>

int main() {
	FILE *fp = fopen("zahlen.txt", "r");
	int highest = NULL;

	while (!feof(fp)) {
	int temp;
	fscanf(fp, "%d", &temp);
	if (!highest) {
		highest = temp;
	}
	if (temp > highest) {
		highest = temp;
	}
	}
	
	
	
	printf("Die größte Zahl aus der Datei ist %d\n", highest);
	return 0;
}
