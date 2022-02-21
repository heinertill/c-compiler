#include <stdio.h>
#include <stdbool.h>

int seriesUp(int f[], int n);

int main() {
	int N = 4, f[N * (N + 1) / 2], n = seriesUp(f, N);
	for (int i=0; i<n; i++) printf("%d%c ", f[i], i<n-1?',':' ');
	return 0;
}

int seriesUp(int f[], int n) {
	for (int i = 1; i<=(n*(n+1)/2);) {
		
		for (int j = 1; j<=i; j++) {
			f[j+i-2] = j;
		}

		i += (i*(i+1)/2);
		
	}
}
