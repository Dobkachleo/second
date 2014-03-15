/**
* Merge sort function code
*/
#include "merge.h"

/**
* The first function is Merge.
* Merge has five parameters:
* 1. The first original array pointer
* 2. Number of its elements
* 3. The second original array pointer
* 4. Number of its elements
* 5. Child array pointer
*/
void Merge(int *m, int n, int *B, int nB, int *C) {
	int a(0), b(0); /** Numbers of current elements in m and B*/
	while( a+b < n+nB ) { /** While there are elements in arrays */
		if ((b>=nB)||((a<n)&&(m[a]<=B[b]))) {
			C[a+b]=m[a]; /** m-element is copied */
			++a;
		} else {
			C[a+b] = B[b]; /** else B-element is copied */
			++b;
		}
	}
}
/**
* The second function is MergeSort.
* MergeSort has two parameters:
* 1. Array pointer
* 2. Number of its elements
*/
void MergeSort(int *m, int n) {
	if (n<2) return; /** Sorting is not necessary */
	if (n==2) { /** Two elements are interchanged */
		if (m[0]>m[1]) { int t(m[0]); m[0]=m[1]; m[1]=t; }
		return;
	}

	MergeSort(m, n/2); /** In other cases MergeSort calls itself; it sorts the first half of array */
	MergeSort(m+n/2, n-n/2); /** then it sorts the rest of array */

	int *B(new int[n]); /** Temporary array with merge result */
	Merge(m,n/2, m+n/2,n-n/2, B); /** Merging */
	for(int i(0); i<n; ++i) m[i]=B[i]; /** Copying in B */
	delete[n] B; /** Delete B */
}