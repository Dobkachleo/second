/**
* Bubble sort function code
*/
#include "bubble.h"

void Bubble(int* m, int n)
{
	for (int i=n-1; i>=1; i--)
		for (int j=0; j<i; j++) {
			if(m[j]>m[j+1]) {
				int foo=m[j]; /** Function Bubble uses temporary variable */
                m[j]=m[j+1];  /** for element interchanging */
                m[j+1]=foo;
			}
		}
}