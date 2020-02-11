#include<stdio.h>

int main()
{
    double N,P,HargaAwal = 0;
    
    for(int i=0;i<4;i++)
    {
        scanf("%lf %lf",&N,&P);
        
        HargaAwal = (100*P)/(100-N);
        
        printf("$%.2lf\n",HargaAwal);
    }
	return 0;
}

