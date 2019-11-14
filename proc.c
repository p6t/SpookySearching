#include "proc.h"

int search(int* list, int n, int val){

	printf("Proc search called\n");

	int i = 0;
	for (i; i < n; i++){
		if (list[i] == val){
			return i;
		}
	}

	return -1;

}
