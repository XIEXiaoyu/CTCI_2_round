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

	int p = 0;
	result_pre = 0;
	while(p != N)		
	{
		printf("p is %d\n", p);
		
		if(p == 0)
		{
			result_pre = 0;
		}
		else
		{
			result_pre += A[p-1];
		}		
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