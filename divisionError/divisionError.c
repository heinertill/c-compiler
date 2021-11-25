#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;

	scanf("%d", &a);
	scanf("%d", &b);
 
    
    // Dies soll Integer-Division a / b umsetzen:
    while (a - b >= 0) {
        result++;
        a = a - b;
    }

	if (a < 0) {
    	while (a + b <= 0) {
    	    result++;
    	    a = a + b;
    	}
	}
    
    printf("%d\n", result);
}
