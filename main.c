#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include "helper.h"
#include "proc.h"
#include "thread.h"


int main(int argc, char **argv) {
	int i;

	/* These are just some preset values for running a simple test case. */
	int n = 10;
	int value = 5;

	/* Print list of scrambled numbers, search for value, and then swap this value with a randomly chosen index. */
	int* list = listGen(n);

	printf("List: [");
	for(i=0; i<n; ++i) {
		printf("%d ", list[i]);
	}
	printf("]\n");
	printf("Value: %d\n", value);

	int indexOfValue = _search(list, n, 1, value);
	printf("The value was found at index %d\n", indexOfValue);

	modifyList(list, n, indexOfValue);
	indexOfValue = _search(list, n, 1, value);
	printf("After modifying the list once, the value is now found at index %d\n", indexOfValue);

}

