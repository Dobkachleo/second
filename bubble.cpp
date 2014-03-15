/** \file bubble.cpp
*   \brief Bubble sort function code
*/

/** \fn void Bubble(int* m, int n)
*   \brief Bubble sorting
*
*   \param *m - array pointer
*   \param n - number of elements
*/

/** \var int foo
*   \brief temporary variable
*/
#include "bubble.h"

void Bubble(int* m, int n)
{
	for (int i=n-1; i>=1; i--)
		for (int j=0; j<i; j++) {
			if(m[j]>m[j+1]) {
				int foo=m[j];
                m[j+1]=foo;
			}
		}
}