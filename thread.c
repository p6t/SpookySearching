#include "thread.h"

/* Creation of child threads will be called inside search function. */
int search(int* list, int n, int val){

	printf("Thread search called\n");
	
	// This block of code is what would be called by the child thread.	
	int i = 0;
	for (i; i < n; i++){
		if (list[i] == val){
			return i;
		}
	}
	
	return -1;
}
