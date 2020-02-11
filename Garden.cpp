#include<stdio.h>

int main()
{
    int jumlahBaris,jumlahKolom,jumlahInput,ubahBaris,ubahKolom,matriks[105][105],nilaiUbah;
    
    scanf("%d %d",&jumlahBaris,&jumlahKolom);
    for(int i=1;i<=jumlahBaris;i++)
    {
        for(int j=1;j<=jumlahKolom;j++)
        {
            scanf("%d",&matriks[i][j]);
        }
    }
    scanf("%d",&jumlahInput);
    
    for(int k=1;k<=jumlahInput;k++)
    {
        scanf("%d %d %d",&ubahBaris,&ubahKolom,&nilaiUbah);
        
        for(int m=1;m<=jumlahBaris;m++)
        {
            for(int n=1;n<=jumlahKolom;n++)
            {
                if(ubahBaris==m && jumlahKolom==n)
                {
                    matriks[ubahBaris][ubahKolom] = nilaiUbah;
                }
            }
        }
    }
    printf("\nHasil Akhirnya : \n");
    for(int y=1;y<=jumlahBaris;y++)
    {
        for(int z=1;z<=jumlahKolom;z++)
        {
            printf("%d",matriks[y][z]);
            if(z<jumlahKolom)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
	return 0;
}

