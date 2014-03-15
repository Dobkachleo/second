/** \file sort.cpp
*   \brief The main code
*
*   Details
*   Two arrays are for two different sort ways
*   Random fill of arr
*   Random fill of mas
*   Showing of unsorted arrays
*   Merge sorting is for arr; bubble sorting is for mas
*   Showing of sorted arrays
*/
#include "bubble.h"
#include "merge.h"
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	srand(time(NULL));
	int arr[10],k,mas[10];
	for (int i=0; i<10; i++) arr[i]=rand() % 100;
	for (int i=0; i<10; i++) mas[i]=rand() % 100;
	for (int i=0; i<10; i++) printf("arr[%d]=%d mas[%d]=%d\n",i,arr[i],i,mas[i]);
	MergeSort(arr,10); Bubble(mas,10); printf("\n");
	for (int i=0; i<10; i++) printf("arr[%d]=%d mas[%d]=%d\n",i,arr[i],i,mas[i]);

	getch();
}