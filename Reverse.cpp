#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int counter,i,c= 0;
   
   scanf("%d",&counter);
   
   for(int z = 0 ; z< counter;z++)
   {
        scanf("%s",s);
   
       for (i = 0; s[i]!='\0'; i++) {
          if (s[i]>='a' && s[i]<='z') 
            //Mengubah Kecil ke Besar
                s[i] = s[i] - 32; 
            else if(s[i]>='A' && s[i]<='Z') 
            //Mengubah Besar ke KEcil
                s[i] = s[i] + 32; 
       }
       while (s[c] != '\0')
       {
            c++;
       }
       int k = 0;
       int l = c - 1;
     
       while (k < l) {
          int temp = s[k];
          s[k] = s[l];
          s[l] = temp;
          k++;
          l--;
       }
       printf("Case #%d: %s\n",z+1, s);
       c = 0;
   }
   
   return 0;
}
