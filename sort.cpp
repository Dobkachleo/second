/**
* The main code
*/
#include "bubble.h"
#include "merge.h"
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
	srand(time(NULL));
	int arr[10],k,mas[10]; /** Two arrays are for two different sort ways */
	for (int i=0; i<10; i++) arr[i]=rand() % 100; /** Random fill of arr */
	for (int i=0; i<10; i++) mas[i]=rand() % 100; /** Random fill of mas */
	for (int i=0; i<10; i++) printf("arr[%d]=%d mas[%d]=%d\n",i,arr[i],i,mas[i]); /** Showing of unsorted arrays */
	MergeSort(arr,10); Bubble(mas,10); printf("\n"); /** Merge sorting is for arr; bubble sorting is for mas */
	for (int i=0; i<10; i++) printf("arr[%d]=%d mas[%d]=%d\n",i,arr[i],i,mas[i]); /** Showing of sorted arrays */

	getch();
}