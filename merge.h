/** \file merge.h
*   \brief Merge sort function announcement
*/

/** \fn void Merge(int *m, int n, int *B, int nB, int *C)
*
*   \param *m - the first original array pointer
*   \param n - number of its elements
*   \param *B - the second original array pointer
*   \param nB - number of its elements
*   \param C - child array pointer
*/

/** \fn void MergeSort(int *m, int n)
*
*   \param *m - array pointer
*   \param n - number of its elements
*/
#include <stdio.h>

#ifndef _MERGE_
#define _MERGE_

void Merge(int *m, int n, int *B, int nB, int *C);
void MergeSort(int *m, int n);
#endif