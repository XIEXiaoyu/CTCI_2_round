#include <stdio.h>

#include "equl.h"

int solution(int A[], int N)
{
	int result_pre = 0;
	int result_suf = 0;
	int output = -1;

	// the sum of all the elements
	int sum = 0;
	for(int i = 0; i < N; i++)
	{
		sum += A[i];
	}

	printf("sum is %d\n", sum);

	// deal with the corner cases
	// p = 0
	if((sum - A[0]) == 0)
	{
		output = 0;
		return output;
	}

	// p = N-1;
	if((sum - A[N-1]) == 0)
	{
		output = N-1;
		return output;
	}

	int p = 1;
	result_pre = 0;
	printf("p is %d\n", p);
	while(p != (N-1))
	{
		result_pre += A[p-1];
		printf("result_pre is %d\n", result_pre);
		result_suf = sum - A[p] - result_pre;
		printf("result_suf is %d\n", result_suf);
		if(result_pre == result_suf)
		{
			output = p;
			return p;
		} 
		else
		{
			p++;
		}
	}

	return output;
}