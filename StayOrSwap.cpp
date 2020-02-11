#include<stdio.h>

int main()
{
    int counter,jumlahPiring,kapasitasYangDapatDimakan,porsiAwal,porsiSetiapPiring,total = 0;
    
    scanf("%d",&counter);
    
    for(int i=0;i<counter;i++)
    {
        scanf("%d %d %d",&jumlahPiring,&kapasitasYangDapatDimakan,&porsiAwal);
       total = porsiAwal;
        
        for(int j=0;j<jumlahPiring;j++)
        {
            scanf("%d",&porsiSetiapPiring);
            
           if(porsiSetiapPiring > kapasitasYangDapatDimakan)
           {
              total = total;
           }
           if(porsiSetiapPiring <= kapasitasYangDapatDimakan)
           {
               if(porsiSetiapPiring >= total)
               {
                   total = porsiSetiapPiring;
               }
               else
               {
                   total = total;
               }
           }
        }
        printf("Case #%d: %d\n",i+1,total);
        total = 0;
    }
	return 0;
}
