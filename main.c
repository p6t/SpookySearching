#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include "helper.h"
#include "proc.h"
#include "thread.h"


int main(int argc, char **argv) {
	int i, j;

	/* These are just some preset values for running a simple test case. */
	int n = 10;
	int value = 5;

	/* Print list of scrambled numbers, search for value, and then swap this value with a randomly chosen index. */
	int* list = listGen(n);

	for(i=1; i<=4; ++i) {
 		printf("\nList: [");
        	for(j=0; j<n; ++j) {
                	printf("%d ", list[j]);
        	}
       		printf("]\n");
	        printf("Value: %d\n", value);

		printf("Search with %d parallels:\n", i);
		int indexOfValue = _search(list, n, i, value);
		printf("The value was found at index %d\n\n", indexOfValue);
	}
}

