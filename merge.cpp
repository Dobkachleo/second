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