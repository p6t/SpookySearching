#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include "helper.h"

int main(int argc, char **argv) {

	int n = 10;
	int value = 5;

	printf("The list is:\n");
	int* list = listGen(n);
	int indexOfValue = findVal(list, n, value);
	printf("\n\nValue %d was found in the list at index %d\n", value, indexOfValue);
	printf("\nThe new list is:\n");
	modifyList(list, n, indexOfValue);

}

