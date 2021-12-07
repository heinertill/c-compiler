#include <stdio.h>
#include <stdbool.h>

bool mauern(int klein, int gross, int ziel);

int main() {
	printf("Das Ergebnis ist: %i\n", mauern(3,1,8));
	printf("Das Ergebnis ist: %i\n", mauern(3,1,9));
	printf("Das Ergebnis ist: %i\n", mauern(3,2,10));
	return 0;
}

bool mauern(int klein, int gross, int ziel) {
	while (ziel > 0 && (klein > 0 || gross > 0)) {
		if ((ziel - 5) >= 0 && (gross > 0)) {
			ziel = ziel - 5;
			gross -= 1;
		} else if ((ziel - 1) >= 0 && (klein > 0)) {
			ziel = ziel - 1;
			klein -= 1;
		}
	}
	if (ziel > 0) {
		return 0;
	} else {
		return 1;
	}
}
