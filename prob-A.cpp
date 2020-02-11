#include<stdio.h>

int main(){
    char kalimat[10005];
    int c=0; 
    
    scanf("%[^\n]",&kalimat);
    for(int k=0 ;kalimat[k]!='\0'; k++) {
          if (kalimat[k]>='a' && kalimat[k]<='z') 
            //Mengubah Kecil ke Besar
                kalimat[k] = kalimat[k] - 32;
       }
       
        while (kalimat[c] != '\0')
       {
            c++;
       }
    for(int i=0;i<c;i++)
    {
        if(kalimat[i]=='I' || kalimat[i]=='i')
        {
            kalimat[i]='1';
        }
         if(kalimat[i]=='R' || kalimat[i]=='r')
        {
            kalimat[i]='2';
        }
         if(kalimat[i]=='E' || kalimat[i]=='e')
        {
            kalimat[i]='3';
        }
         if(kalimat[i]=='A' || kalimat[i]=='a')
        {
            kalimat[i]='4';
        }
         if(kalimat[i]=='S' || kalimat[i]=='s')
        {
            kalimat[i]='5';
        }
         if(kalimat[i]=='G'  || kalimat[i]=='g')
        {
            kalimat[i]='6';
        }
         if(kalimat[i]=='T' || kalimat[i]=='t')
        {
            kalimat[i]='7';
        }
         if(kalimat[i]=='B' || kalimat[i]=='b')
        {
            kalimat[i]='8';
        }
         if(kalimat[i]=='P' || kalimat[i]=='p')
        {
            kalimat[i]='9';
        }
         if(kalimat[i]=='O' || kalimat[i]=='o')
        {
            kalimat[i]='0';
        }
    }
    printf("%s\n",kalimat);
        
    
 return 0;
}
