#include <stdio.h>

int main()
	{
	long long tot = 0;

	long i, e, r, nr;
	FILE *f = fopen("data.in","r");

	int cifre[32];
	for(i=0;i<32;i++)
		{
		cifre[i] = 0;
		}

	char res;

	while( !feof(f) )
		{
		res = fscanf(f, "%ld", &nr);
		if(res>0)
			{
			for(i=0;i<32;i++)
				{
				cifre[i] += nr % 2;
				nr /= 2;
				if(!nr) break;
				}
			}
		}

	tot = 0;
	e = 1;
	for(i=0;i<32;i++)
		{
		tot += e * cifre[i];
		e *= 2;
		}

	printf("%lld\n", tot);

	return 0;
	}
