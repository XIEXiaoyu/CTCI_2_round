#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) 
{
	char str[] = "I am fine.";
	int len = strlen(str);

	int val[len];
	for(int i = 0; i < len; i++)
	{
		val[i] = str[i] - 'A';
		printf("%d %d\n", val[i], i);
	} 

	return 0;
}