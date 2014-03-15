/** \file merge.cpp
*   \brief Merge sort function code
*/

/** \fn void Merge(int *m, int n, int *B, int nB, int *C)
*   \brief Merge merges arrays
*
*   \param *m - the first original array pointer
*   \param n - number of its elements
*   \param *B - the second original array pointer
*   \param nB - number of its elements
*   \param C - child array pointer
* 
*   Details
*   a(0), b(0) - numbers of current elements in m and B
*   While there are elements in arrays, m-element is copied else B-element is copied
*/

/** \fn void MergeSort(int *m, int n)
*   \brief MergeSort sorts arrays
*
*   \param *m - array pointer
*   \param n - number of its elements
*
*   Details
*   if (n<2) Sorting is not necessary
*   Two elements are interchanged
*   In other cases MergeSort calls itself; it sorts the first half of array
*   then it sorts the rest of array
*   *B - temporary array with merge result
*   Merging, copying in B, deleting B
*/
#include "merge.h"

void Merge(int *m, int n, int *B, int nB, int *C) {
	int a(0), b(0);
	while( a+b < n+nB ) {
		if ((b>=nB)||((a<n)&&(m[a]<=B[b]))) {
			C[a+b]=m[a];
			++a;
		} else {
			C[a+b] = B[b];
			++b;
		}
	}
}
void MergeSort(int *m, int n) {
	if (n<2) return;
	if (n==2) {
		if (m[0]>m[1]) { int t(m[0]); m[0]=m[1]; m[1]=t; }
		return;
	}

	MergeSort(m, n/2);
	MergeSort(m+n/2, n-n/2);

	int *B(new int[n]);
	Merge(m,n/2, m+n/2,n-n/2, B);
	for(int i(0); i<n; ++i) m[i]=B[i];
	delete[n] B;
}