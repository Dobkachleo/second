#include "bubble.h"

void Bubble(int* m, int n)
{
	for (int i=n-1; i>=1; i--)
		for (int j=0; j<i; j++) {
			if(m[j]>m[j+1]) {
				int foo=m[j];
                m[j]=m[j+1];
                m[j+1]=foo;
			}
		}
}