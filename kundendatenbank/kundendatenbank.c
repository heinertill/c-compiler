#include <stdio.h>
#include <stdbool.h>

struct kunde {
	unsigned long nummer;
	char name[100];
	short geb_jahr;
	unsigned short geschlecht;
};
struct kunde kdb[100];

int einfuegen(struct kunde kdb[], int index);
void anzeigen(struct kunde kdb[], int index);
int menu(int currentMax);

int main() {
	struct kunde {
		unsigned long nummer;
		char name[100];
		short geb_jahr;
		unsigned short geschlecht;
	};
	struct kunde kdb[100];
	int currentMax = 0;
	while (true) {
		if(menu(currentMax) == 0) {
			break;
		}
	} 

	return 0;
}
	

int menu(int currentMax) {
	printf("--- Momentane Anzahl der Indizes: %d ---", currentMax);
	printf("Waehlen Sie eine der Moeglichkeiten: \n<1> Neuen Datensatz anlegen \n<2> Vorhandenen Datensatz abrufen \n<0> Ende\n");
	int currentChoice;
	scanf("%i", &currentChoice);
	if (currentChoice == 0) {
		return 0;
	} else if (currentChoice == 1) {
		einfuegen(struct kunde kdb[], currentMax+1);
		return 1;
	} else if (currentChoice == 2) {
		anzeigen(struct kunde kdb[], currentMax);
		return 1;
	} else {
		return 0;
	}
}

int einfuegen(struct kunde kdb[], int index) {
	return 1;	
}
