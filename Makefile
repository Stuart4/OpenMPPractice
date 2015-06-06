all: hello count
hello: hello.c
	gcc -std=gnu99 -fopenmp hello.c -o hello
count: count.c
	gcc -std=gnu99 -fopenmp count.c -o count
