#include<stdio.h>

int main()
{
 int counter,jumlahKursi,kiri,kanan,tengah,x,y,z,jumlahKiri,jumlahTengah,jumlahKanan;
 int count=0,total=0,a=0;
 scanf("%d",&counter);
 
 for(int i=0;i<counter;i++)
 {
  scanf("%d %d %d %d",&jumlahKursi,&kiri,&tengah,&kanan);
  
  for(int j=1;j<=10000;j++)
  {
   x= j;
   y= j+1;
   z= j+2;
   
   jumlahKiri= x*kiri;
   jumlahTengah= y*tengah;
   jumlahKanan= z*kanan;
   
   total = jumlahKiri+jumlahTengah+jumlahKanan;
   
   if(total==jumlahKursi){
    count++;
    break;
   }
  }
  if(count>0)
  {
   printf("Case #%d: %d\n",a+1,x);
   a++;
  }
  else{
   printf("Case #%d: %d\n",a+1,-1);
   a++;
  }
  total= 0,count=0;
 }
}
