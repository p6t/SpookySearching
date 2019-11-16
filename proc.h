#ifndef _PROC_H
#define _PROC_H
#include <unistd.h>
#include "helper.h"

//#define _search(list, n, value) search((list), (n), (value))

int search(int* list, int n, int procs, int val);

#endif
