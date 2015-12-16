#include <stdio.h>

#include "equl.h"

int main()
{
	int A[8] = {-1, 3, -4, 5, 1, -6, 2, 1};

	int N = 8;

	int output = 0;
	output = solution(A, 8);
	printf("The final output is %d\n", output);

	return 0;
}