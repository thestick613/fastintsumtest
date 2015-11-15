#include <stdio.h>

int main()
	{
	long long tot = 0;
	long nr = 0;

	FILE *f = fopen("data.in","r");
	char u;

	while( !feof(f) )
		{
		u = fscanf(f, "%ld", &nr);
		if(u>0)
			{
			tot += nr;
			}
		}

	printf("%lld\n", tot);

	return 0;
	}
