#include<stdio.h>
//jobonacci
int fibonacci(int angka)
{
	if (angka==0)
	{
		return 0;
	}
	else if(angka==1 ||angka==2)
	{	
		return 1;
	}
	else {
		return fibonacci(angka-1) + fibonacci(angka-3);
	}
}
int main()
{
	int angka,hasil;
	scanf("%d",&angka);
	
	printf("%d\n",fibonacci(angka));	
	
	return 0;
}

