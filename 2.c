#include<stdio.h>
int main()
{
	char *p1[3] = {
	
		"天生我才必有用",
		"千金散尽还复来",
		"举杯消愁愁更愁"
	
	};
	int i;

	for(i = 0; i < 3; i++)
	{
		
		printf("%s\n", p1[i]);

	}
	return 0;

}
