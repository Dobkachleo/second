/**
* Bubble sort function code
*/
#include "bubble.h"

/**
* @function Bubble
* Bubble sorting
* @param *m - array pointer
* @param n - number of elements
*/
void Bubble(int* m, int n)
{
	for (int i=n-1; i>=1; i--)
		for (int j=0; j<i; j++) {
			if(m[j]>m[j+1]) {
				int foo=m[j]; /// temporary variable
                m[j+1]=foo;
			}
		}
}