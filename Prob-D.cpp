#include<stdio.h>

int main()
{
	int tescase,x,y;
	int a,b;
	char fire[105][105];
	FILE *fp;
	fp = fopen("testdata.txt","r");
	fscanf(fp,"%d",&tescase);
	for (int i=1;i<=tescase;i++){
		fscanf(fp,"%d %d",&x,&y);
		for(int j=0;j<x;j++){
			for (int k=0;k<x;k++){
				fscanf(fp," %c",&fire[j][k]);
				if (fire[j][k]=='F'){
				a = j;
				b = k;
				}
			}
		}
		printf("Case #%d:\n",i);
	for(int j=0;j<x;j++){
			for (int k=0;k<x;k++){
				if (j>a-y && j<a+y && k>b-y && k<b+y){
					printf("F");
				}
				else {
					printf("%c",fire[j][k]);
				}
			}
			printf("\n");	
	}
	printf("\n");
}
	return 0;
}
