#include "proc.h"

int search(int* list, int n, int val){

	pid_t childPid = fork();
	if (childPid == 0){
		//Child
		int i = 0;
		for (i; i < n; i++){
			if (list[i] == val){
				printf("Child says %d\n", i);
				exit(i);
			}
		}
	}
	else if (childPid < 1){
		printf("Fork failed"); // Log error
	} else {
		//Parent
		int childResult = -1;
		wait(&childResult);
		childResult = childResult / 255;
		return childResult;
	}

	printf("Proc search called\n");


	return -1;

}
