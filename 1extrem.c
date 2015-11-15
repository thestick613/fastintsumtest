#include <stdio.h>

int main()
	{
	long long tot = 0;

	long i, nr, e, r;
	FILE *f = fopen("data.in","r");

	int cifre0 = 0, cifre1 = 0, cifre2 = 0, cifre3 = 0, cifre4 = 0, cifre5 = 0, cifre6 = 0, cifre7 = 0, cifre8 = 0, cifre9 = 0, cifre10 = 0, cifre11 = 0, cifre12 = 0, cifre13 = 0, cifre14 = 0, cifre15 = 0, cifre16 = 0, cifre17 = 0, cifre18 = 0, cifre19 = 0, cifre20 = 0, cifre21 = 0, cifre22 = 0, cifre23 = 0, cifre24 = 0, cifre25 = 0, cifre26 = 0, cifre27 = 0, cifre28 = 0, cifre29 = 0, cifre30 = 0, cifre31 = 0;

	char res;

	while( !feof(f) )
		{
		res = fscanf(f, "%ld", &nr);
		if(res>0)
			{
			if(nr) { cifre0 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre1 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre2 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre3 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre4 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre5 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre6 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre7 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre8 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre9 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre10 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre11 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre12 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre13 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre14 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre15 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre16 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre17 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre18 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre19 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre20 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre21 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre22 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre23 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre24 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre25 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre26 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre27 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre28 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre29 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre30 += nr % 2; nr /= 2;} else { continue; }
			if(nr) { cifre31 += nr % 2; nr /= 2;} else { continue; }
			}
		}

	tot = 0;
	e = 1;
	tot += e * cifre0; e *= 2;
	tot += e * cifre1; e *= 2;
	tot += e * cifre2; e *= 2;
	tot += e * cifre3; e *= 2;
	tot += e * cifre4; e *= 2;
	tot += e * cifre5; e *= 2;
	tot += e * cifre6; e *= 2;
	tot += e * cifre7; e *= 2;
	tot += e * cifre8; e *= 2;
	tot += e * cifre9; e *= 2;
	tot += e * cifre10; e *= 2;
	tot += e * cifre11; e *= 2;
	tot += e * cifre12; e *= 2;
	tot += e * cifre13; e *= 2;
	tot += e * cifre14; e *= 2;
	tot += e * cifre15; e *= 2;
	tot += e * cifre16; e *= 2;
	tot += e * cifre17; e *= 2;
	tot += e * cifre18; e *= 2;
	tot += e * cifre19; e *= 2;
	tot += e * cifre20; e *= 2;
	tot += e * cifre21; e *= 2;
	tot += e * cifre22; e *= 2;
	tot += e * cifre23; e *= 2;
	tot += e * cifre24; e *= 2;
	tot += e * cifre25; e *= 2;
	tot += e * cifre26; e *= 2;
	tot += e * cifre27; e *= 2;
	tot += e * cifre28; e *= 2;
	tot += e * cifre29; e *= 2;
	tot += e * cifre30; e *= 2;
	tot += e * cifre31; e *= 2;

	printf("%lld\n", tot);

	return 0;
	}
