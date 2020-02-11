#include<stdio.h>

int main()
{
	int counter,jumlahWaktu,awal,akhir,petir = 0,satu = 0,count1 = 0,count = 0;
	char biner[10005];
	
	FILE *fp = fopen("testdata.in","r");
	while(!feof(fp))
	{
		fscanf(fp,"%d\n",&counter);
		for(int i=0;i<counter;i++)
		{
			fscanf(fp,"%d %d %d\n",&jumlahWaktu,&awal,&akhir);
			fscanf(fp,"%s\n",&biner);
			for(int j=0;j<jumlahWaktu;j++)
			{
				if(biner[j]=='1')
	            {
	            	petir++;
	            }
	            if(biner[j]=='0'|| j==jumlahWaktu-1)
	            {
	            	if(petir>=awal&&petir<=akhir)
	            	{
	            		count1++;
					}
					petir = 0;
				}
			}
				printf("Case #%d: %d\n",i+1,count1);
			
			count1 = 0,count = 0;
		}
	}
	fclose(fp);
}
