/**
* Merge sort function announcement
*/
#include <stdio.h>

#ifndef _MERGE_
#define _MERGE_

/**
* @function Merge
* @param *m - the first original array pointer
* @param n - number of its elements
* @param *B - the second original array pointer
* @param nB - number of its elements
* @param C - child array pointer
*/
void Merge(int *m, int n, int *B, int nB, int *C);
/**
* @function MergeSort
* @param *m - array pointer
* @param n - number of its elements
*/
void MergeSort(int *m, int n);
#endif