#include "helper.h"

int* listGen(int n){
	
	int* list = malloc(sizeof(int) * n);
	
	// Generate list of sequential numbers
	int i = 0;
	for (i; i < n; i++){
		list[i] = i+1;
	}

	// Scramble list
	i = 0;
	int randNum1, randNum2, temp;
	float threeFourths = (3.0 / 4.0) * n;
	for (i; i < n; i++){
		randNum1 = rand() % n;
		randNum2 = rand() % n;
		temp = list[randNum1];
		list[randNum1] = list[randNum2];
		list[randNum2] = temp;
		if (n > 100 && i > threeFourths){
			break;
		}
	}
	
	return list;
}

int _search(int* list, int list_size, int parallels, int target){

	printf("Original findVal function called\n");
	int i = 0;
	for (i; i < list_size; i++){
		if (list[i] == target){
			return i;
		}
	}

	return -1;

}

void modifyList(int* list, int n, int index){

	int randNum, element, val;
	randNum = rand() % n;
	element = list[randNum];
	val = list[index];
	
	list[randNum] = val;
	list[index] = element;
}

/*
split_list(): breaks up a list into parts to give to processes or threads.
--
int list_size: number of elements in list.
int* start_i: int array of size n_parallels. Start this as an array of all zeroes in the heap.
int n_parallels: number of parts to split the list into.
--
start_i will be modified so each element is an evenly spaced start index for parallel searching.
for example, calling split_list(8, [0,0], 2) will change [0,0] into [0,4]. 
int return: 0 if success, -1 if error.
*/
int split_list(int list_size, int* start_i, int n_parallels) {
	int i;
	
	if(list_size < n_parallels) {
		return(-1);
	}

	for(i=0; i<n_parallels; ++i) {
		start_i[i] = i*list_size/n_parallels;
	}	

	return(0);
}






