#include<stdio.h>

int main()
{
	//monopoli
    int jumlahLemparan,langkah,totalLangkah = 0;
    
    scanf("%d",&jumlahLemparan);
    
    for(int i=0;i<jumlahLemparan;i++) 
    {
        scanf("%d",&langkah); //hasil dari lemparan dadu
        totalLangkah = totalLangkah + langkah;
        if(totalLangkah==30) //aturan permainan
        {
            totalLangkah = 10;
        }
        else if(totalLangkah ==12)
        {
            totalLangkah = 28;
        }
        else if(totalLangkah==35)
        {
            totalLangkah = 7;
        }
        if(totalLangkah >= 40)
        {
            totalLangkah = totalLangkah - 40;
        }
    }
    printf("%d\n",totalLangkah);
 return 0;
}
