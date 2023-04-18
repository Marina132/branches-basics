#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int min = 10000, n=10, a[10];
	
	printf("Array: ");
	for (int i=0; i<n; i++) {
		a[i] = rand()%10;
		printf("%d ", a[i]);
		if (a[i]<min) min = a[i];
	}
	printf("\nMinimum element: %d", min);	
}

