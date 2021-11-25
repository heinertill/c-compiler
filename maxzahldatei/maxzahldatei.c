#include <stdio.h>
#include <stdbool.h>

int main() {
	FILE *fp = fopen("zahlen.txt", "r");
	int highest = NULL;
	if (fp != NULL) {
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
		printf("Die größte Zahl aus der Datei ist %d - diese wird auch in einer anderen Datei notiert.\n", highest);
		FILE *fp2 = fopen("maxzahl.txt", "w");
		if (fp2 != NULL) {
			fprintf(fp2, "%d\n", highest);
		} else {
			printf("Die Ausgabedatei kann nicht geöffnet werden.");
		}

	} else {
	printf("Die Datei kann nicht gelesen werden.");
	}



	return 0;
}
