#include<stdio.h>

int main()
{
    int counter,jumlahMiePerbaiki,jumlahMieDiRumah,jumlahMieDiToko ,total = 0;
    
    scanf("%d",&counter);
    
    for(int i=0;i<counter;i++)
    {
        scanf("%d %d %d",&jumlahMiePerbaiki,&jumlahMieDiRumah,&jumlahMieDiToko);
        
        total = jumlahMieDiRumah + jumlahMieDiToko;
        
        if(total>=jumlahMiePerbaiki)
        {
            printf("Case #%d: %s\n",i+1,"yes");
        }
        else
        {
            printf("Case #%d: %s\n",i+1,"no");
        }
    }
    
	return 0;
}

