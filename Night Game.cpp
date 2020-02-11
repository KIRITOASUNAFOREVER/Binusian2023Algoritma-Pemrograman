#include<stdio.h>

int main()
{
    int counter,panjang=0,s[1005],angka;
    
    scanf("%d",&counter);
   
   for(int z = 0 ; z< counter;z++)
   {
        scanf("%d",&angka);
        
        for(int j=0;j<angka;j++)
        {
            scanf("%d",&s[j]);
        }
     printf("Case #%d: ",z+1);
        for(int m=angka-1;m>=0;m--)
        {
            if(angka!=0)
            {
                printf("%d ",s[m]);
            }
            //printf("%d",s[m]);
        }
        printf("\n");
   
       
       
       
   }
        
	return 0;
}


