#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv) {
	int nthreads, tid;
#pragma omp parallel private(tid, nthreads)
	{
		tid = omp_get_thread_num();
		printf("Hello World from thread #%d.\n", tid);
		if (tid == 0) {
			// master thread
			nthreads = omp_get_num_threads();
			printf("Total number of threads is %d.\n", nthreads);
		}
	}
}
