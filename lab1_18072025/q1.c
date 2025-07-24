//Write a C program to swap the content of 2 variables entered through the command line using function and pointer

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main (int argc, char *argv[]) {
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	swap(&num1, &num2);
	printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
}
