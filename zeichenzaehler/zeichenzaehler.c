#include <stdio.h>
#include <stdbool.h>

int main() {
	FILE *fp = fopen("zeichenzaehler/test.txt", "r");
	int zeichen = 0;
	int vokale[] = {0,0,0,0,0};
	if (fp != NULL) {
		while (!feof(fp)) {
			char currentChar; 
			fscanf(fp, "%c", &currentChar);
			zeichen++;
			switch(currentChar) {
				case 'a':
					vokale[0]++;
					break;
				case 'A':
					vokale[0]++;
					break;
				case 'e':
					vokale[1]++;
					break;
				case 'E':
					vokale[1]++;
					break;
				case 'i':
					vokale[2]++;
					break;
				case 'I':
					vokale[2]++;
					break;
				case 'o':
					vokale[3]++;
					break;
				case 'O':
					vokale[3]++;
					break;
				case 'u':
					vokale[4]++;
					break;
				case 'U':
					vokale[4]++;
					break;
			}
		}
	} else {
		printf("Die Datei konnte nicht eingelesen werden.");
	}

	printf("Die Anzahl an Zeichen ist: %d\nAnzahl an A: %d\nAnzahl an E: %d\nAnzahl an I: %d\nAnzahl an O: %d\nAnzahl an U: %d\n", zeichen, vokale[0], vokale[1], vokale[2], vokale[3], vokale[4]);
	return 0;
}
