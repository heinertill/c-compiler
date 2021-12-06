#include <stdio.h>
#include <stdbool.h>

float berechneSpannung(float R, float I);
float berechneWiderstand(float U, float I);
float eingabeWert(char Wert);

int main() {
	float U, R, I;
	char whichCalc;
	printf("Welche Berechnung soll durchgeführt werden? (U, R): ");
	scanf("%c", &whichCalc);
	if (whichCalc == 'U') {
		printf("Die Spannung ist %f\n", berechneSpannung(eingabeWert('R'), eingabeWert('I')));	
	} else if (whichCalc == 'R') {	
		printf("Der Widerstand ist %f\n", berechneWiderstand(eingabeWert('U'), eingabeWert('I')));	
	}
	return 0;
}

float eingabeWert(char Wert) {
	printf("Geben Sie einen Wert für %c ein: ", Wert);
	float zahlenWert;
	scanf("%f", &zahlenWert);
	return zahlenWert;
}

float berechneSpannung(float R, float I) {
	float u = R * I;
	return u;
}

float berechneWiderstand(float U, float I) {
	float r = U / I;
	return r;
}
