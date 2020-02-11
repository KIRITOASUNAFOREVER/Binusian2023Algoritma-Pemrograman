#include<stdio.h>

int main()
{
    unsigned long long int counter,total1 =1,total2 = 1,angka1,angka2,hasilAkhir;
    
    scanf("%llu",&counter);
    getchar();
    for(int i=0;i<counter;i++)
    {
        scanf("%llu %llu",&angka1,&angka2);
        getchar();
        for(long long int k=1;k<=angka1;k++)
        {
            total1 = (total1*2)%1000000007;
        }
        for(long long int m=1;m<=angka2;m++)
        {
            total2 = (total2*3)%1000000007;
        }
       hasilAkhir = total1 * total2;
       printf("%llu\n",hasilAkhir%1000000007);
        total1 = 1,total2=1;
    }
    
    

	return 0;
}

