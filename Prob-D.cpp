#include<stdio.h>

int main()
{
    double angka;
    for(int i=0;i<3;i++)
    {
        scanf("%lf",&angka);
        if(angka==111 || angka==222 || angka==333 || angka==444)
        {
            printf("%.1lf...\n",angka/999);
        }
        else if(angka==555 || angka==666 || angka==777 || angka==888)
        {
            printf("%.1f...\n",angka/999-0.1);
        }
        else if(angka<500)
        {
            printf("%.3f...\n",angka/999);
        }
        else
        {
            printf("%.3f...\n",(angka/999)-0.001);
        }
    }
	return 0;
}

