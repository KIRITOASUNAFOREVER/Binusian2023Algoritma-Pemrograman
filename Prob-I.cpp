#include<stdio.h>

int main()
{
   int counter,jumlah;
   scanf("%d",&counter);
   
   for(int i=0;i<counter;i++)
   {
       scanf("%d",&jumlah);
       getchar();
       char kalimat[jumlah+1];
       scanf("%[^\n]",&kalimat);
       getchar();
       int  count  = 0;
       printf("Case #%d: ",i+1);
       for(int j=0;j<jumlah;j++)
       {
           if(kalimat[j]==' ')count++;
           if(count%2==1)continue;
           printf("%c",kalimat[j]);
       }
       printf("\n");
   }
	return 0;
}

