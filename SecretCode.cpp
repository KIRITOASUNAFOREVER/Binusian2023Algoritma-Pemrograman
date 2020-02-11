#include<stdio.h>

int main()
{
    int counter,panjang=0;
    char s[1005];
    
    scanf("%d",&counter);
   
   for(int z = 0 ; z< counter;z++)
   {
        scanf("%s",s);
   
       while (s[panjang] != '\0')
       {
            panjang++;
       }
       int k = 0;
       int l = panjang - 1;
     
       while (k < l) {
          int temp = s[k];
          s[k] = s[l];
          s[l] = temp;
          k++;
          l--;
       }
       printf("Case #%d: ",z+1);
       for(int v=0;v<panjang;v++)
       {
           printf("%d",s[v]%2);
       }
       printf("\n");
       panjang = 0;
   }
        
	return 0;
}


