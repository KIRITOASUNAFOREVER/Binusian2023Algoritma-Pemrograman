#include<stdio.h>

int main()
{
	int tes,input;
	scanf("%d",&tes);
	for (int i=1;i<=tes;i++){
		scanf("%d",&input);
	printf("Case #%d: ",i);
		for (int k=0;k<input;k++) {
		printf("%c",97+k);	
		}
		printf("\n");
	}
	return 0;
}

