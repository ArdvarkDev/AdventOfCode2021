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

	for (int i = 0; i < depthCount; i++) {
		printf("%i ", depths[i]);		

		if (i == 0) {
			printf("(N/A - no previous measurement)\n");
			continue;
		}

		if (depths[i] > depths[i -1]) {
			printf("(increased)\n");
			increaseCount++;
		} else
		if (depths[i] < depths[i -1])
			printf("(decreased)\n");
		else
			printf("(no change)");
	}

	printf("There are %i measurements that are larger than the previous measurement\n", increaseCount);
	
	return 0;
}