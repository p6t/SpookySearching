#include "thread.h"

int search(int* list, int n, int val){

	printf("Thread search called\n");

	int i = 0;
	for (i; i < n; i++){
		if (list[i] == val){
			return i;
		}
	}

	return -1;

}
