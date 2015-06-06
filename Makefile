all: hello
hello: hello.c
	gcc -fopenmp hello.c -o hello
