#include<stdio.h>
int kemungkinan(int input)
{
	int hasil;
	hasil = input + 1;
	if (input==0){
		return 0;
	}
	else {
		return hasil + kemungkinan(input-1);
	}
}
int main()
{
	int input;
	scanf("%d",&input);
	printf("%d\n",kemungkinan(input)+1);
	return 0;
}

