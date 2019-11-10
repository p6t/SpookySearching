#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include "helper.h"

int main(int argc, char **argv) {

	/* These are just some preset values for running a simple test case. */
	int n = 10;
	int value = 5;

	/* Print list of scrambled numbers, search for value, and then swap this value with a randomly chosen index. */
	printf("The list is:\n");
	int* list = listGen(n);
	int indexOfValue = findVal(list, n, value);
	printf("\n\nValue %d was found in the list at index %d\n", value, indexOfValue);
	printf("\nThe new list is:\n");
	modifyList(list, n, indexOfValue);

}

