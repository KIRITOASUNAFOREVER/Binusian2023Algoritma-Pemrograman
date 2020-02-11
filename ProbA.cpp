#include<stdio.h>

int main()
{
    int x,y,k,naik,turun,tujuanNaik,tujuanTurun;
    scanf("%d %d %d",&x,&y,&k);
    naik = k - x;
    turun = y - k;
    tujuanNaik = x + naik;
    tujuanTurun = y - turun;
    if(naik==turun &&  tujuanNaik==k && tujuanTurun ==k)
    {
        printf("%d\n",naik);
    }
    else
    {
        printf("-1\n");
    }
 return 0;
}
