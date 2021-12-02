#include <stdio.h>

#include "input.h"

/* example values
int depths[] = {
	199,
	200,
	208,
	210,
	200,
	207,
	240,
	269,
	260,
	263
};
*/


int main() {

	int depthCount = sizeof(depths) / sizeof(int);
	int increaseCount = 0;	
	int lastWindow = 0;	
	int window = 0;

	for (int i = 0; i < depthCount - 2; i++) {
		lastWindow = window;
		window = 0;
		
		for (int j = 0; j < 3; j++)
			window += depths[i + j];

		printf("%i ", window);

		if (i == 0)
			printf("(N/A - no previous sum)\n");
		else
		
		if (window > lastWindow) {
			printf("(increased)\n");
			increaseCount++;
		} else
		if (window < lastWindow)
			printf("(decreased)\n");
		else
			printf("(no change)\n");
	}

	
	printf("There are %i sums that are larger than the previous sum\n", increaseCount);

	return 0;
}