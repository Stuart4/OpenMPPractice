#include <omp.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char ** argv) {
	int count, total;

#pragma omp parallel shared(total) private(count)
	{
		for (int i = 0; i < 200; i++) {
		//#pragma omp atomic
			total += 1;
		}
	}
	printf("Counted to %d\n", total);
	count = total = 0;
#pragma omp parallel shared(total) private(count)
	{
		for (int i = 0; i < 200; i++) {
		#pragma omp atomic
			total += 1;
		}
	}
	printf("Counted to %d\n", total);

}
