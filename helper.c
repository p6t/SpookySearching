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

int _search(int* list, int n, int val){

	printf("Original findVal function called\n");
	int i = 0;
	for (i; i < n; i++){
		if (list[i] == val){
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






