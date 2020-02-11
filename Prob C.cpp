#include<stdio.h>

int main()
{
	long int daging,sayur,telur;
	scanf("%ld %ld %ld",&daging,&sayur,&telur);
	
	if(daging > sayur)
	{
		if(daging > telur)
		{
			if(sayur > telur)
			{
				printf("Daging\nSayur\nTelur\n");
			}
			else
			{
				printf("Daging\nTelur\nSayur\n");
			}
		}
		else
		{
			printf("Telur\nDaging\nSayur\n");
		}
	}
	else
	{
		if(sayur > telur)
		{
			if(daging > telur)
			{
				printf("Sayur\nDaging\nTelur\n");
			}
			else
			{
				printf("Sayur\nTelur\nDaging\n");
			}
		}
		else
		{
			printf("Telur\nSayur\nDaging\n");
		}
	}
	return 0;
}

